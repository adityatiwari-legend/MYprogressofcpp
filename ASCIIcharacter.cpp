#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 255; i++) {
        cout << "ASCII value: " << i << " -> Character: " << char(i) << endl;
    }
    return 0;
}