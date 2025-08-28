#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_set<int> used;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        used.insert(x);
    }

    for (int i = 1; i <= 3001; i++) {  // since max ai ≤ 3000
        if (used.find(i) == used.end()) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
