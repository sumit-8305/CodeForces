#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<string> cake(r);
    for (int i = 0; i < r; i++) cin >> cake[i];

    int rowsWithoutS = 0, colsWithoutS = 0;

    // Count rows without strawberries
    for (int i = 0; i < r; i++) {
        if (cake[i].find('S') == string::npos)
            rowsWithoutS++;
    }

    // Count columns without strawberries
    for (int j = 0; j < c; j++) {
        bool hasS = false;
        for (int i = 0; i < r; i++) {
            if (cake[i][j] == 'S') {
                hasS = true;
                break;
            }
        }
        if (!hasS) colsWithoutS++;
    }

    int result = rowsWithoutS * c + colsWithoutS * r - rowsWithoutS * colsWithoutS;
    cout << result << endl;
    return 0;
}
