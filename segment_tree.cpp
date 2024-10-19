#include <vector>

using namespace std;

class SegmentTree {
private:
    vector<int> tree;
    vector<int> tags;
    int n;
    
    void _pushdown(int s, int mid, int e, int idx) {
        if(tags[idx] != 0) {
            tags[2*idx] += tags[idx];
            tags[2*idx+1] += tags[idx];
            tree[2*idx] += tags[idx]*(mid-s+1);
            tree[2*idx+1] += tags[idx]*(e-mid);
            tags[idx] = 0;
        }
    }
    
    int _query(int t_s, int t_e, int s, int e, int idx) {
        if (t_s<=s && t_e>=e) {
            return tree[idx];
        } else if (t_s > e || t_e < s) {
            return 0;
        } else {
            int mid = s + (e-s)/2;
            _pushdown(s, mid, e, idx);
            int left = _query(t_s, t_e, s, mid, 2*idx);
            int right = _query(t_s, t_e, mid+1, e, 2*idx+1);
            return left+right;
        }
    }
    
    void _update(int t_s, int t_e, int s, int e, int idx, int val) {
        if (t_s<=s && t_e>=e) {
            tree[idx] += val*(e-s+1);
            tags[idx] += val;
        } else if (t_s > e || t_e < s) {
            return;
        } else {
            int mid = s + (e-s)/2;
            _pushdown(s, mid, e, idx);
            _update(t_s, t_e, s, mid, 2*idx, val);
            _update(t_s, t_e, mid+1, e, 2*idx+1, val);
            tree[idx] = tree[2*idx] + tree[2*idx+1];
        }
    }

public:
    SegmentTree(int _n) {
        n = _n;
        tree = vector<int>(4*n, 0);
        tags = vector<int>(4*n, 0);
    }
    
    int query(int s, int e) {
        return _query(s, e, 0, n-1, 1);
    }
    
    void update(int s, int e, int val) {
        _update(s, e, 0, n-1, 1, val);
    }
};