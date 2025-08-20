#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int zeroCnt = 0, fiveCnt = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 0) zeroCnt++;
        if (x == 5) fiveCnt++;
    }

    if (zeroCnt == 0) {
        cout << -1 << endl;  // no zero -> not divisible by 10
        return 0;
    }

    if (fiveCnt < 9) {
        cout << 0 << endl;   // cannot make divisible by 9 -> only 0 works
        return 0;
    }

    fiveCnt = (fiveCnt / 9) * 9; // use max multiple of 9 fives
    cout << string(fiveCnt, '5');
    cout << string(zeroCnt, '0') << endl;

    return 0;
}
