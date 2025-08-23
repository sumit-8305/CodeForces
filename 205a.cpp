#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int index = 1;
    int minimum = INT32_MAX;
    int count = 1;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a < minimum) {
            minimum = a;
            index = i + 1; 
            count = 1;
        } else if (a == minimum) {
            count++;
        }
    }

    if (count > 1)
    {
        cout << "Still Rozdil" << endl;
    }
    else
    {
        cout << index << endl;
    }
    return 0;
}