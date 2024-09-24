#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Node {
public:
    // pointer definition
    Node * children[26];
    char ch;
    Node(char ch) {
        // "this" is a pointer, use "->"" to access members
        this -> ch = ch;
        for(int i=0;i<26;i++) {
            this -> children[i] = nullptr;
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
    }
    cout << endl;
}