#include <iostream>
using namespace std;

int main() {
    int num, product = 1, digit;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        product = 0;
    } else {
        while (num != 0) {
            digit = num % 10;
            product *= digit;
            num /= 10;
        }
    }

    cout << "The product of the digits is: " << product << endl;

    return 0;
}