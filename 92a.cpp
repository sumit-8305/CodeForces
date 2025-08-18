#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int sum = (n * (n + 1)) / 2;
    k %= sum;

    for (int i = 1; i < n; i++)
    {
        if (k - i >= 0)
        {
            k -= i;
        }
        if (k < 0)
            break;
    }
    cout << k << endl;
    return 0;
}