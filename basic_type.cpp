
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // long
    long res = long(pow(2,400));
    cout << "test long:" << res << endl;
    // string
    string s = "abcde";
    cout << s[3] << endl;
    cout << s.length() << endl;
    // ceil from <cmath> header
    int c = ceil(3.7);
    cout << "ceil: " << c << endl;
    // char
    char ch = s[0];
    cout << ch << endl;
    // int to string
    int aa = 1;
    string bb = to_string(aa);
    // string to int
    int cc = stoi(bb);
    cout << aa << " " << bb << " " << cc << endl;
    // char to int
    int idx = bb[0] - '0';
    cout << "idx:" << idx << endl;
    // char to string
    vector<char> ch_vec = {'a','b','c','d','e'};
    string res_string = "";
    for(auto pt=ch_vec.begin();pt!=ch_vec.end();pt++) {
        res_string += *pt;
    }
    cout << res_string << endl;
    // string also has iterators, and we can call std::reverse() to reverse it
    reverse(res_string.begin(), res_string.end());
    cout << res_string << endl;
    // std::isupper(), std::isalnum(), etc...
    isalnum('1'); // true
    isupper('1'); // false
    // std::tolower()
    char r_lower = tolower('A');
    cout << r_lower << endl;
    // substring starting at 0 with length of 3, C++ doesn't have .startswith() or .endswith()
    string ss = s.substr(0, 3);
    cout << "substring of s: " << ss << endl;
}