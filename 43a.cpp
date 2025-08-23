#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int aCnt = 0, bCnt = 0;
    string a, b;
    // unordered_map<string, int> freq;
    // for(int i = 0; i<n ; i++){
    //     string s;
    //     cin >> s;
    //     freq[s]++;
    // }
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == a || a == "")
        {
            a = s;
            aCnt++;
        }
        else if (s != a)
        {
            b = s;
            bCnt++;
        }
    }
    // int maxFreq = 0;
    // string ans;
    // for(auto it: freq){
    //     if(it.second > maxFreq){
    //         maxFreq = it.second;
    //         ans = it.first;
    //     }
    // }
    if (aCnt > bCnt)
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }
    return 0;
}