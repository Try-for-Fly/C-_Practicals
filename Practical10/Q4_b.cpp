#include <iostream>
using namespace std;

class classA
{
public:
    int a;
};

class classB : virtual public classA
{
public:
    int b;
};

class classC : virtual public classA
{
public:
    int c;
};

class classD : public classB, public classC
{
public:
    int d;
};


int main()
{
    classD obj;

    obj.a = 5;
    obj.a = 10;

    obj.b = 10;
    obj.c = 20;

    cout << "A in B: " << obj.a;
    cout << "\tA in C: " << obj.a;
    cout << "\nB: " << obj.b;
    cout << "\tC: " << obj.c;
}



/* A in B: 10   A in C: 10
   B: 10    C: 20  */
