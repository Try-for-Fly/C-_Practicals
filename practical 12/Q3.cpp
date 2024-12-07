#include <iostream>
using namespace std;

class user
{
public:
    string name;
    int age;
};

class doctor : virtual public user
{
    int doctor_id;
    int doctor_specialist;

public:
    void getdata()
    {
        cout << "Please enter your name: ";
        cin >> name;
        cout << "Please enter your specialist: ";
        cin >> doctor_specialist;
        cout << "Please enter your age: ";
        cin >> age;
    }
    void putdata()
    {
        cout << "Doctor Id : " << doctor_id << endl;
        cout << "Doctor name : " << name << endl;
        cout << "Doctor age : " << age << endl;
        cout << "Doctor specialist : " << doctor_specialist << endl;
    }
};

class patient : virtual public user
{
    int patient_id;
    string addmission_date;

public:
    void getdata()
    {
        cout << "Please enter your name: ";
        cin >> name;
        cout << "Please enter your specialist: ";
        cin >> addmission_date;
        cout << "Please enter your age: ";
        cin >> age;
    }
    void putdata()
    {
        cout << "Doctor Id : " << patient_id << endl;
        cout << "Doctor name : " << name << endl;
        cout << "Doctor age : " << age << endl;
        cout << "Doctor specialist : " << addmission_date << endl;
    }
};

