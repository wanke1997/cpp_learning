//
//  main.cpp
//  cpp_debug
//
//  Created by Ke Wan on 9/24/24.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

bool compare(vector<int> a, vector<int> b) {
    if (a[0] != b[0]) {
        return a[0] < b[0];
    } else {
        return a[1] > b[1];
    }
}

struct MyCompare {
    bool operator()(vector<int> a, vector<int> b) {
        if (a[0] != b[0]) {
            return a[0] > b[0];
        } else {
            return a[1] < b[1];
        }
    }
};

int main() {
    vector<vector<int>> v = {{1,2},{4,3},{4,9},{4,7},{3,3},{3,2},{7,7},{7,9}};
    priority_queue<vector<int>, vector<vector<int>>, MyCompare> pq;
    // NOTE: C++如果没有显式声明指针，都是值传递，所有对象都要另外复制一份
    for(int i=0; i<v.size(); i++) {
        pq.push(v[i]);
    }
    // using sort() function in <algorithm> to sort vectors
    sort(v.begin(), v.end(), compare);
    for(int i=0; i<v.size(); i++) {
        cout << "address:" << &v[i] << " ";
        cout << "[" << v[i][0] << "," << v[i][1] << "]," << endl;
    }
    cout << endl;
    // using pq to sort. Note that in C++ world, heaps are max heap by default, which is
    // different from Python does.  
    while(!pq.empty()) {
        vector<int> vv = pq.top();
        cout << "address:" << &vv << " ";
        cout << "[" << vv[0] << "," <<vv[1] << "]," << endl;
        pq.pop();
    }
    cout << endl;
}