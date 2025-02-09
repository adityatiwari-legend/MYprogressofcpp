#include<iostream>
using namespace std;

int main()
{
    float maths, physics, chem, hindi, english, per;

    cout<<"Marks obtained in maths: ";
    cin>>maths;
    cout<<"Marks obtained in physics: ";
    cin>>physics;
    cout<<"Marks obtained in chem: ";
    cin>>chem;
    cout<<"Marks obtained in hindi: ";
    cin>>hindi;
    cout<<"Marks obtained in english: ";
    cin>>english;
     
    per = ((maths+physics+chem+hindi+english)/500)*100;

    cout<<"total percentage of student is "<<per<<endl;

    if (per>= 60)
    {
        cout<<"First division";
    
    }
    else if (per<60 && per>=50)
    {
        cout<<"Second division";
    }
    else if (per<50 && per>=30)
    {
        cout<<"third division";
    }

    return 0;
}

