#include <iostream>
using namespace std;

int main() {
    char ch;

    // Taking input from the user
    cout << "Enter any character: ";
    cin >> ch;

    if (('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z')) {
        cout << ch << " is an Alphabet." << endl;
    } else if ('0' <= ch && ch <= '9') {
        cout << ch << " is a Digit." << endl;
    } else {
        cout << ch << " is a Special Character." << endl;
    }

    return 0;
}
