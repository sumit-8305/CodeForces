#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> v(n+1), u(n+1), prefV(n+1, 0), prefU(n+1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        u[i] = v[i];
    }

    // build prefix sum for original
    for (int i = 1; i <= n; i++) {
        prefV[i] = prefV[i-1] + v[i];
    }

    // sort u and build prefix sum
    sort(u.begin()+1, u.end());
    for (int i = 1; i <= n; i++) {
        prefU[i] = prefU[i-1] + u[i];
    }

    int m;
    cin >> m;
    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1) {
            cout << prefV[r] - prefV[l-1] << "\n";
        } else {
            cout << prefU[r] - prefU[l-1] << "\n";
        }
    }
    return 0;
}
