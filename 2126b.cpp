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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int answer = 0;
        for (int i = 0; i <= n - x;)
        {
            bool can_hike = true;
            for (int j = 0; j < x; j++)
            {
                if (a[i + j] != 0)
                {
                    can_hike = false;
                    break;
                }
            }
            if (can_hike)
            {
                answer++;
                i += x + 1; // skip hike days and break day
            }
            else
            {
                i++;
            }
        }
        cout << answer << endl;
    }
}