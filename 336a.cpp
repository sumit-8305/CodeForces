#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;

    if (x > 0 && y > 0) {
        cout << 0 << " " << x + y << " " << x + y << " " << 0 << "\n";
    } else if (x > 0 && y < 0) {
        cout << 0 << " " << y - x << " " << x - y << " " << 0 << "\n";
    } else if (x < 0 && y > 0) {
        cout << x - y << " " << 0 << " " << 0 << " " << y - x << "\n";
    } else { // x < 0 && y < 0
        cout << x + y << " " << 0 << " " << 0 << " " << x + y << "\n";
    }
    return 0;
}
