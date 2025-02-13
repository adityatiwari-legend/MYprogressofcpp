#include <iostream>
using namespace std;

int main() {
    int n, pos, element;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n + 1];

    cout << "Enter " << n << " elements for the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to insert: ";
    cin >> element;

    cout << "Enter the position to insert (0-indexed): ";
    cin >> pos;

    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return 0;
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;

    cout << "Array after insertion: ";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}