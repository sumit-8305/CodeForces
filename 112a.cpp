#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a,b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        char x = tolower(a[i]);
        char y = tolower(b[i]);
        if(y<x) {
            cout << 1;
            return 0;
        } else if (y>x) {
            cout << -1;
            return 0;
        }
    }
    cout << 0;

    return 0;
}