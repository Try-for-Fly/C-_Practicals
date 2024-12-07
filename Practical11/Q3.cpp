#include <iostream>
using namespace std;

class A
{
public:
    void disp()
    {
        cout << "Parent class disp() function" << endl;
    }

    void xyz()
    {
        cout << "xyz() function of parent class" << endl;
    }
};

class B : public A
{
public:
    void disp()
    {
        cout << "Child class disp() function" << endl;
    }
};


int main()
{
    B obj1;
    obj1.disp();
    obj1.xyz();
    A obj2;
    obj2.disp();
    obj2.xyz();
    obj1.xyz();
}

/*Child class disp() function
  xyz() function of parent class
  Parent class disp() function
  xyz() function of parent class
  xyz() function of parent class */





