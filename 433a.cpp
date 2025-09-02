#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    if (!(cin >> n)) return 0;
    int a100 = 0, a200 = 0;
    for (int i = 0; i < n; ++i) {
        int w; cin >> w;
        if (w == 100) ++a100;
        else ++a200; // w == 200
    }

    long long S = 100LL * a100 + 200LL * a200;
    if (S % 2 != 0) { // total must be even (it always is here, but keep for safety)
        cout << "NO\n";
        return 0;
    }

    long long need = S / 2;
    long long take200 = min<long long>(a200, need / 200);
    need -= take200 * 200;

    if (need % 100 == 0 && need / 100 <= a100) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
