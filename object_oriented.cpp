#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Node {
public:
    char ch;
    // there are 26 Node pointers in the children array
    Node * children[26];
    // default constructor
    Node () {
        ch = ' ';
        for(int i=0;i<26;i++) {
            children[i] = nullptr;
        }
    }
    // constructor with a parameter
    Node (char _ch) {
        ch = _ch;
        for(int i=0;i<26;i++) {
            children[i] = nullptr;
        }
    }
    // destructor to delete objects safely
    ~Node() {
        for(int i=0;i<26;i++) {
            if(children[i] != nullptr) {
                delete children[i];
            }
        }
    }
};

int main() {
    // access from an object, use .
    Node node = Node('a'); 
    cout << node.ch << endl; // "a"
    // create an instance for pointer, use "new"
    // access from a reference, use ->
    Node * node_ref = new Node('a');
    cout << node_ref -> ch << endl; // "a"
    // initialize a vector with size
    vector<int> arr(26);
    for(int i=0;i<26;i++) {
        arr[i] = i;
        cout << arr[i] << " ";
        if(i%2==0) {
            node_ref -> children[i] = new Node('a'+i);
        }
    }
    cout << "happy ending" << endl;
    // delete objects in heap to prevent memory leak
    delete node_ref;

    int a[26] = {0,0};
    for(int i=0;i<26;i++) {
        cout << a[i] << " ";
    }
}