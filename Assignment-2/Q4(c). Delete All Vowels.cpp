#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string arr[5] = {"banana", "apple", "mango", "grapes", "cherry"};
    int n = 5;

    sort(arr, arr + n);

    cout << "Sorted strings: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}