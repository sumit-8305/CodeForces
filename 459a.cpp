#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    // Case 1: vertical line
    if (x1 == x2) {
        int side = abs(y2 - y1);
        cout << x1 + side << " " << y1 << " " << x2 + side << " " << y2;
    }
    // Case 2: horizontal line
    else if (y1 == y2) {
        int side = abs(x2 - x1);
        cout << x1 << " " << y1 + side << " " << x2 << " " << y2 + side;
    }
    // Case 3: diagonal of square
    else if (abs(x1 - x2) == abs(y1 - y2)) {
        cout << x1 << " " << y2 << " " << x2 << " " << y1;
    }
    // No solution
    else {
        cout << -1;
    }

    return 0;
}
