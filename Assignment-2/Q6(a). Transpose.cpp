#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of non-zero elements for each matrix: ";
    cin >> n;
    int A[n][3], B[n][3];

    cout << "Enter first matrix (row col val):\n";
    for (int i = 0; i < n; i++) cin >> A[i][0] >> A[i][1] >> A[i][2];

    cout << "Enter second matrix (row col val):\n";
    for (int i = 0; i < n; i++) cin >> B[i][0] >> B[i][1] >> B[i][2];

    cout << "Result (row col val):\n";
    for (int i = 0; i < n; i++) {
        if (A[i][0] == B[i][0] && A[i][1] == B[i][1])
            cout << A[i][0] << " " << A[i][1] << " " << A[i][2] + B[i][2] << endl;
    }
    return 0;
}