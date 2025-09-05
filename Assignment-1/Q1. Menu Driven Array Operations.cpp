#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newArr[n], k = 0;
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < k; j++) {
            if (arr[i] == newArr[j]) {
                found = true;
                break;
            }
        }
        if (!found) newArr[k++] = arr[i];
    }

    cout << "Array without duplicates: ";
    for (int i = 0; i < k; i++) cout << newArr[i] << " ";
    return 0;
}