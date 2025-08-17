#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    long long k;
    cin >> n >> k;

    long long maxJoy = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        long long f, t;
        cin >> f >> t;
        long long joy = f - max(0LL, t - k);
        maxJoy = max(maxJoy, joy);
    }
    cout << maxJoy << "\n";
    return 0;
}
