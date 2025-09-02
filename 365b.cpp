#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;

    vector<long long> arr(n);
    for(int i = 0; i < n; i++) {
        int a;
        cin>>a;
        arr[i] = a;
    }
    if (n <= 2) {
        cout << n << "\n";
        return 0;
    }
    int maxLength = 2, currentLength = 2;
    for (int i = 2; i < n; i++) {
        if (arr[i] == arr[i-1] + arr[i-2]) {
            currentLength++;
        } else {
            currentLength = 2;  
        }
        maxLength = max(maxLength, currentLength);
    }
    cout << maxLength << "\n";
    return 0;

}