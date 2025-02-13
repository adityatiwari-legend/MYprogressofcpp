#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr1[n], arr2[n];

    cout << "Enter " << n << " elements for the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    cout << "Elements of the second array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}