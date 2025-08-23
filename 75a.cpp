#include <iostream>
using namespace std;
int remZero(string s){
    int rem = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '0'){
            rem = rem*10 + (s[i]-'0');
        }
    }
    return rem;
}
int main(){
    int x, y;
    cin >> x >> y;
    int z = x + y;
    
    
    
    int a = remZero(to_string(x));
    int b = remZero(to_string(y));
    int c = remZero(to_string(z));

    if(a+b == c){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

}