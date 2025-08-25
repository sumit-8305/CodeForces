#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int negative;
    bool flag = true;
    vector<int> posinput, input;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a > 0)
        {
            posinput.push_back(a);
        }
        else if (a < 0)
        {
            if (flag && a != 0)
            {
                negative = a;
                flag = false;
                continue;
            }
            input.push_back(a);
        }
    }
    cout << "1 " << negative << endl;
    if (posinput.size() == 0)
    {
        while (posinput.size() < 2 )
        {
            posinput.push_back(input.back());
            input.pop_back();
            posinput.push_back(input.back());
            input.pop_back();
        }
    }
    input.push_back(0);
    cout << posinput.size();
    for (int i = 0; i < posinput.size(); i++)
    {
        cout << " " << posinput[i];
    }
    cout << endl;
    cout << input.size();
    for (int i = 0; i < input.size(); i++)
    {
        cout << " " << input[i];
    }
}