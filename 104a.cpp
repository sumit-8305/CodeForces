#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a ;
    b=a-10;
    if (b <= 0 || b>11) cout<< 0;
    else if (b==10) cout<< 15;
    else {
        cout<<4;
    }
}