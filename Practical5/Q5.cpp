#include <iostream>
using namespace std;

class area
{
public:
    int length;
    int breadth;

    int setDim(int length, int breath)
    {
        this -> length=length;
        this -> breath=breath;
    }

    void getArea()
    {
        return(length*breadth);
    }
};

int main()
{
    area rec(3, 2);

    cout << "Area = " << rec.getArea() << endl;

    return 0;
}


