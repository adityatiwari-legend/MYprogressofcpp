#include <iostream>

using namespace std;

int main()
{
    float num1, num2, num3, num4, num5;

    cout<<"Enter the value of num1: ";
    cin>>num1;
    cout<<"Enter the value of num2: ";
    cin>>num2;
    cout<<"Enter the value of num3: ";
    cin>>num3;
    cout<<"Enter the value of num4: ";
    cin>>num4;
    cout<<"Enter the value of num5: ";
    cin>>num5;

    float avg =(num1+num2+num3+num4+num5)/5;

    cout<<"The avg of 5 number is: "<< avg;
    return 0;
}
