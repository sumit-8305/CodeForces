#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    // The first valid position Petr can stand in
    int start = max(a + 1, n - b);

    // From 'start' up to 'n', all are valid
    int result = n - start + 1;

    cout << result << endl;
    return 0;
}
