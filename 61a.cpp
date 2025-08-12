#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    string answer = "";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
            answer += '0';
        else
            answer += '1';
    }
    cout << answer;
    return 0;
}