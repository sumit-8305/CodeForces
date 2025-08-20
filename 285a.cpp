#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    // First part: descending from k+1 to 1
    for(int i = k+1; i >= 1; i--) {
        cout << i << " ";
    }

    // Second part: ascending from k+2 to n
    for(int i = k+2; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}
