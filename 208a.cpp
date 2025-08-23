#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    string ans = "";
    for(int i = 0; i < s.length();i++ ){
        if(s[i]=='W'){
            if(s[i+1]!='U'){
                ans += s[i];
                continue;
            }
            if(s[i+2]!='B'){
                ans += s[i];
                continue;
            }
            if(ans!="" && ans.back()!=' '){
                ans += ' ';
            }
            i+=2;
        }else{
            ans += s[i];
        }
        // if(s.substr(i,3) == "WUB"){
        //     if(ans!="" && ans.back()!=' '){
        //         ans += ' ';
        //     }
        //     i+=2;
        // }else{
        //     ans += s[i];
        // }

    }
    cout << ans << endl;
    return 0;
}