#include <iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    int age;

    // Student (string n,int a){
    //     name = n;
    //     age=a;
    // }

    void display(){
        cout<<"name: "<<name<<",age: "<<age<<endl;
    }
};

int main()
{
    // Student stud1("aditya",18);
    // Student stud2("mohit",18);
   
    Student stud1;
    stud1.name="aditya";
    stud1.age=18;

    Student stud2;
    stud2.name="mohit";
    stud2.age=18;

    Student stud3;
    stud3.name="aryama";
    stud3.age=20;

   
    stud1.display();
    stud2.display();
    stud3.display();
    return 0;
}
