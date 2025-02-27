#include <iostream>
using namespace std;

class Rectangle{
    public:
    int length, width;

    Rectangle(int l,int w){

        length= l;
        width= w;
    }

    int area(){
        return length * width;
    }
};
 int main()
 {
    Rectangle r1(10,5);
    cout<<"Area of rectangle 1: "<<r1.area()<<endl;

    Rectangle r2(18,78);
    cout<<"Area of rectangle 2: "<<r2.area()<<endl;
    return 0;
 }
 