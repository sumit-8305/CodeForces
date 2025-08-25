#include <iostream>
using namespace std;

bool isMagic(string s) {
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '1') {
            if (i + 2 < s.length() && s.substr(i, 3) == "144") {
                i += 3;
            } else if (i + 1 < s.length() && s.substr(i, 2) == "14") {
                i += 2;
            } else {
                i++; 
            }
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    bool ans = isMagic(s);
    cout << (ans ? "YES" : "NO") << endl; // CF-style output
    return 0;
}
