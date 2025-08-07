#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int mn = n, mx = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                mn = min(mn, i);
                mx = max(mx, i);
            }
        }
        if (mx - mn < x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}