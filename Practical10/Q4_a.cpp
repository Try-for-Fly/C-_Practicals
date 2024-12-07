#include <iostream>
using namespace std;

class classA
{
public:
    classA()
    {
        cout << "A ";
    }
    ~classA()
    {
        cout << "~A ";
    }
};

class classB
{
public:
    classB()
    {
        cout << "B ";
    }
    ~classB()
    {
        cout << "~B ";
    }
};

class classC : public classA, classB
{
public:
    classC()
    {
        cout << "C ";
    }
    ~classC()
    {
        cout << "~C ";
    }
};

int main()
{
    classC c;
}



/* A B C ~C ~B ~A */
