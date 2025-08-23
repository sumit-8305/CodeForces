#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    int required = (y * n + 99) / 100;  // ceil(y*n / 100) trick
    int puppets = max(0, required - x);

    cout << puppets << endl;
    return 0;
}
