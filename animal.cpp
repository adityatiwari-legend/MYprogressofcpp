#include <iostream>

using namespace std;

class animal{
public:

void makesound(){
    cout<<"Animal makes a sound "<<endl;
}
};
class Dog: public animal{
public:
void makesound(){
    cout<<"dog barks"<<endl;
}
};

int main()
{
    animal a;
     Dog d;


     a.makesound();
     d.makesound();
    return 0;
}
