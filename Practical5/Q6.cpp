#include <iostream>
using namespace std;

class employee
{
public:
    string name;
    int year;
    string address;
};

int main()
{
    employee emp1 = {"Robert", 1994, "64C-WallsStreet"};
    employee emp2 = {"Sam", 2000, "68D-WallsStreet"};
    employee emp3 = {"John", 1999, "26B-WallsStreet"};

    cout << "Name\tYear of joining\t Address" << endl << endl;
    cout << emp1.name << "\t" << emp1.year << "\t\t " << emp1.address << endl;
    cout << emp2.name << "\t" << emp2.year << "\t\t " << emp2.address << endl;
    cout << emp3.name << "\t" << emp3.year << "\t\t " << emp3.address << endl;

    return 0;
}

