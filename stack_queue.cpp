#include <iostream>
#include <queue>
#include <deque>
#include <stack>

using namespace std;

/*

Note:

1. For initialization, if we just declare the variable, the variable will use default initialization function to initialize the object.
If we need to initialize the object with specific initialize function, we need to call it on the right side of "=".

For example, "Node node;" calls default Node(), and "Node node = Node(ch);" calls Node(char ch) with different parameters. 

2. For pop() methods, it doesn't return any values, so we need to retrieve the values before popping it. 

*/

struct Compare {
    // overload the operator()
    bool operator()(int a, int b) {
        return a > b; // Change this to a > b for a min-heap
    }
};

int main() {
    // 1. queue
    queue<int> q;
    q.push(1);
    q.push(2);
    int queue_front = q.front();
    cout << "queue front:" << queue_front << endl;
    q.pop();

    // 2. deque
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    int dq_back = dq.back();
    int dq_front = dq.front();
    cout << "deque front:" << dq_front << " back:" << dq_back << endl;
    dq.size();
    dq.pop_front();

    // 3. stack
    stack<int> stk;
    stk.push(1);
    int stk_top = stk.top();
    cout << "stack top:" << stk_top << endl;
    stk.pop();

    // 4. priority queue, it is contained in the <queue> header. The default is big heap
    // in the <>, there are 3 parameters: data type, container type (default is vector), and compare struct with operator overloading.
    priority_queue<int, vector<int>, Compare> pq;
    vector<int> v =  {1,3,4,2,-1};
    for(int i=0;i<v.size();i++) {
        pq.push(v[i]);
    }

    while (!pq.empty()) {
        int res = pq.top();
        pq.pop();
        cout << res << " ";
    }
    cout << endl;
}