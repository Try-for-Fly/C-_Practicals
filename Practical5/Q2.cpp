#include <iostream>

using namespace std;

class Student
{
    public:
        string name;
        int roll_no; 
};

int main ()
{
	Student stu1;

    stu1.name = "John";
    stu1.roll_no = 2;
    
    return 0;
}
