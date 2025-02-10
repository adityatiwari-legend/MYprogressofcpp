#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Natural numbers from 1 to " << n << " using do-while loop: ";
    int i = 1;
    do {
        cout << i << " ";
        i++; 
    } while (i <= n);
    cout << endl;

    return 0;
}