#include <iostream>
using namespace std;

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3, cols = 3;

    // Row sums
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) sum += a[i][j];
        cout << "Sum of row " << i << " = " << sum << endl;
    }

    // Column sums
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) sum += a[i][j];
        cout << "Sum of col " << j << " = " << sum << endl;
    }

    return 0;
}