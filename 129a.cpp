#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a;
    int oddCnt = 0, evenCnt = 0;
    cin >> a;
    for (int i = 0; i < a; i++){
        int n;
        cin >> n;
        if (n % 2 == 0) {
            evenCnt++;
        } else {
            oddCnt++;
        }
    }
    if(oddCnt % 2 == 0){
        cout<<evenCnt;
    }else{
        cout<<oddCnt;
    }
    return 0;
}