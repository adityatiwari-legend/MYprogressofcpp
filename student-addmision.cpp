#include <iostream>

using namespace std;
int main()
{
    int TestScore, age;

    cout<<"Enter the TestScore of student: ";
    cin>>TestScore;
    cout<<"Enter the age of student:";
    cin>>age;

    if (age>18 && TestScore>60)
    {
        cout<<"Eligible for admission";
    }
    else if (age<=18)
    {
        cout<<"Not eligible due to age";
    }
    else if (age> 18 && TestScore<60)
    {
        cout<<"Not eligible due to TestScore";
    }
    
    

    return 0;
}
