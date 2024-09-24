
#include <iostream>
#include <cmath>

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
}