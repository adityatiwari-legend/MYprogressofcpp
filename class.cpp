#include <iostream>
#include<string.h>
using namespace std;

class Car{
    public:
    string brand;
    int year;

    Car(string b, int y) {
        brand = b;
        year = y;
    }
    void displayinfo() {
        cout << "Car brand: " << brand << " year: " << year << endl;
    }
};

int main()
{
    Car car1("toyota",2020);
    Car car2("ford",2000);

    car1.displayinfo();
    car2.displayinfo();

    return 0;
}