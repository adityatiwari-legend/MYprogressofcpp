#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Natural numbers from 1 to " << n << " using while loop: ";
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i++; 
    }
    cout << endl;

    return 0;
}