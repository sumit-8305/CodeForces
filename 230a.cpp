#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> arr;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        arr.push_back({a, b});
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < m; i++) {
        if (n > arr[i].first) {
            n += arr[i].second;
        } else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
