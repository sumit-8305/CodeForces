#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0, lastChar = -1;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;

        if (x == lastChar)
        {
            count++;
        }
        lastChar = x;
    }

    cout << count << endl;
    return 0;
}