#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int matrix[5][5];
    int x, y;

    // Input the matrix and locate the '1'
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                x = i; // 0-based row index
                y = j; // 0-based column index
            }
        }
    }

    // Compute moves to bring (x, y) to center (2, 2)
    int moves = abs(2 - x) + abs(2 - y);
    cout << moves << endl;

    return 0;
}
