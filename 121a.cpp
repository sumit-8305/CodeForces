#include <bits/stdc++.h>
using namespace std;

vector<long long> lucky;

// generate lucky numbers up to 1e10
void generate(long long num) {
    if (num > 1e10) return;
    if (num > 0) lucky.push_back(num);
    generate(num * 10 + 4);
    generate(num * 10 + 7);
}

int main() {
    long long l, r;
    cin >> l >> r;
    
    // generate lucky numbers
    generate(0);
    sort(lucky.begin(), lucky.end());

    long long ans = 0;
    long long current = l;
    
    for (long long L : lucky) {
        if (current > r) break;
        long long right = min(r, L);
        ans += (right - current + 1) * L; // all x in [current, right] map to L
        current = right + 1;
    }

    cout << ans << "\n";
    return 0;
}
