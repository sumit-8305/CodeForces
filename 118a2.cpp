#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s ;
    for(auto c : s){
        if(c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u' || c == 'Y' || c == 'y'){
            continue;
        }else{
            char ch = tolower(c);
            cout << "." << ch;
        }
    }
}