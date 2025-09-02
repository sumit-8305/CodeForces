#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> lucky;

// generate lucky numbers recursively
void generate(ll num) {
    if (num > 1e10) return;
    if (num > 0) lucky.push_back(num);
    generate(num * 10 + 4);
    generate(num * 10 + 7);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll l, r;
    cin >> l >> r;

    // generate all lucky numbers up to 1e10
    generate(0);
    sort(lucky.begin(), lucky.end());

    ll ans = 0;
    ll cur = l;

    for (ll L : lucky) {
        if (cur > r) break;
        if (L >= cur) {
            ll right = min(r, L);
            ans += (right - cur + 1) * L;
            cur = right + 1;
        }
    }

    cout << ans << "\n";
    return 0;
}
