#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    int maxHeight = -1, minHeight = 101;
    int maxIndex = -1, minIndex = -1;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > maxHeight) {
            maxHeight = a[i];
            maxIndex = i; // first occurrence from left
        }
        if (a[i] <= minHeight) {
            minHeight = a[i];
            minIndex = i; // last occurrence from right
        }
    }

    int swaps = maxIndex + (n - 1 - minIndex);
    if (maxIndex > minIndex) swaps--; // overlap correction

    cout << swaps << endl;
    return 0;
}
