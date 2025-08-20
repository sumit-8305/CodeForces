#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    // First part: descending from k+1 to 1
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    int cnt = 0;
    for (int i = 0; i < k; i++){
        if(arr[i] >0 ) break;
        cnt+= abs(arr[i]);
    }
    cout << cnt << endl;
    return 0;
}
