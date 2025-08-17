#include <iostream>
#include <vector>
using namespace std;
int main(){   
    int n;
    cin>>n;
    int half = n / 2;
    int total = n * n;

    for (int i = 0; i < n; ++i) {
        vector<int> row;
        for (int j = 1; j <= half; ++j) {
            int t = i * half + j;        // goes from 1 to n^2/2 across rows
            int a = t;
            int b = total + 1 - t;       // pair so a + b = n^2 + 1
            row.push_back(a);
            row.push_back(b);
        }
        // Print the row (any order is fine)
        for (int k = 0; k < n; ++k) {
            if (k) cout << ' ';
            cout << row[k];
        }
        cout << '\n';
    }
    return 0;
}