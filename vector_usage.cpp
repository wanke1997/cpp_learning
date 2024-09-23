#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "hello" << endl;
    vector<int> v = {1,2,3,4,4,4,5};
    for(int i=0;i<3;i++) {
        int var;
        cin >> var;
        v.push_back(var);
    }
    for(int i=0;i<v.size();i++) {
        cout << v[i] <<" ";
    }
    cout << endl;
}