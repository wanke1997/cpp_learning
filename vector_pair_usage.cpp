#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// passing a vector reference
void output_vector(vector<int> & v) {
    for(int i=0;i<v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

bool compare(int a, int b) {
    return a > b;
}

int main() {
    // 1. Initialization
    // initialize with specific values
    vector<int> v = {1,2,3,4,4,4,5};
    // initialize with size of 5 and value of -1
    vector<int> vv(5, -1);

    // 2. add new elements to the end of vector, use push_back
    for(int i=1;i<=5;i++) {
        v.push_back(i);
    }
    output_vector(v);
    // 3. pop the last element using pop_back
    v.pop_back();
    output_vector(v);
    // 4. extend another vector to the original vector
    v.insert(v.end(), vv.begin(), vv.end());
    // 5. reverse the vector
    reverse(v.begin(), v.end());
    output_vector(v);
    // 6. sort with compare function
    sort(v.begin(), v.end(), compare);
    output_vector(v);
    // 7. call next_permutation
    v = {1,2,3};
    while(next_permutation(v.begin(), v.end())) {
        cout << v[0] << v[1] << v[2] << endl;
    }
    // 8. fill
    fill(v.begin(), v.end(), 119);
    output_vector(v);
    // another container: pair
    pair<int, vector<int> > p(0, v);
    cout << "first: " << p.first << endl;
    cout << "second: ";
    // use const auto& to traverse a vector, very useful in modern C++
    for(const auto & e:p.second) {
        cout << e << " ";
    }
    cout << endl;
}