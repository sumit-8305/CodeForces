#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cur = 0, ans = 0;
    while (n--) {
        int a, b;
        cin >> a >> b;
        cur -= a;        // a leave
        cur += b;        // b enter
        ans = max(ans, cur); // track maximum
    }
    cout << ans << endl;
    return 0;
}
