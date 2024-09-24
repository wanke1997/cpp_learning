#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = {1,2,3};
    while(next_permutation(v.begin(), v.end())) {
        cout << v[0] << v[1] << v[2] << endl;
    }
}