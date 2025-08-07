#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x =9;
        while(n!=0){
            x=min(x, n % 10);
            n /= 10;
        }
        cout << x << endl;
    }
}