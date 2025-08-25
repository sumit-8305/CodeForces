#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    string s;
    cin >> k >> s;

    int n = s.size();
    if (n % k != 0) {
        cout << -1 << endl;
        return 0;
    }

    unordered_map<char,int> freq;
    for (char c : s) freq[c]++;

    string base = "";
    for (auto &p : freq) {
        if (p.second % k != 0) {
            cout << -1 << endl;
            return 0;
        }
        base.append(p.second / k, p.first);
    }

    string ans = "";
    for (int i = 0; i < k; i++) ans += base;

    cout << ans << endl;
    return 0;
}
