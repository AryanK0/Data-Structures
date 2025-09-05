#include <iostream>
using namespace std;

int main() {
    int r1, c1, n1, r2, c2, n2;
    cout << "Enter rows cols non-zero for matrix A: ";
    cin >> r1 >> c1 >> n1;
    int A[n1][3];
    for (int i = 0; i < n1; i++) cin >> A[i][0] >> A[i][1] >> A[i][2];

    cout << "Enter rows cols non-zero for matrix B: ";
    cin >> r2 >> c2 >> n2;
    int B[n2][3];
    for (int i = 0; i < n2; i++) cin >> B[i][0] >> B[i][1] >> B[i][2];

    if (c1 != r2) {
        cout << "Multiplication not possible";
        return 0;
    }

    cout << "Multiplication not implemented fully (basic template).";
    return 0;
}