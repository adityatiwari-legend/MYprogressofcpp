#include <iostream>

using namespace std;
int main()
{
    float AP, AM, PPS, EVS, CS, CIV, percentage;
    cout<<"Enter the marks obtained in AP out of 100: ";
    cin>>AP;
    cout<<"Enter the marks obtained in AM out of 100: ";
    cin>>AM;
    cout<<"Enter the marks obtained in PPS out of 100: ";
    cin>>PPS;
    cout<<"Enter the marks obtained in EVS out of 100: ";
    cin>>EVS;
    cout<<"Enter the marks obtained in CS out of 100: ";
    cin>>CS;
    cout<<"Enter the marks obtained in CIV out of 100: ";
    cin>>CIV;

    percentage = ((AP+AM+PPS+EVS+CS+CIV)/600)*100;

    cout<<"The percentage of student is: "<<percentage;
    return 0;
}
