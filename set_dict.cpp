#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main() {
    // unordered_map
    unordered_map<int, int> map = {{0,2}, {2,4}, {3,11}};
    // 1. add or update key-value pairs in the map
    map[1] = 2;
    map[1] = 3;
    // 2. remove a key from the map
    map.erase(1);
    // 3. get the size of the map
    cout << "size:" << map.size() << endl;
    map[3] = 2;
    // 4. find if the key exists in the map
    if (map.find(3) != map.end()) {
        cout << "found in map" << endl;
    } else {
        cout << "not found in map" << endl;
    }
    // 5. traverse the map using iterator
    for(auto pt = map.begin(); pt != map.end(); pt++) {
        cout << "debug:" << pt->first << " " << pt->second << endl;
    }
    for (const auto& pair : map) {
        cout << pair.first << " -> " << pair.second << endl;
    }
    cout << "size:" << map.size() << endl;
    // unordered_set
    unordered_set<int> set = {1,2,3,4,5};
    // 1. add an element to the set
    set.insert(1);
    // 2. find if the element exists in the set
    if (set.find(11) != set.end()) {
        cout << "found in the set" << endl;
    } else {
        cout << "not found in the set" << endl;
    } // found in the set
    // 3. remove the element from the set
    set.erase(1);
    if (set.find(11) != set.end()) {
        cout << "found in the set" << endl;
    } else {
        cout << "not found in the set" << endl;
    } // not found in the set
}