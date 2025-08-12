#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int amazingCount = 0;
    int mn = nums[0], mx = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] < mn) {
            mn = nums[i];
            amazingCount++;
        } else if (nums[i] > mx) {
            mx = nums[i];
            amazingCount++;
        }
    }

    cout << amazingCount << endl;
    return 0;
}
