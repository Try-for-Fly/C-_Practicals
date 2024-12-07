#include <iostream>
#include <string>

using namespace std;

class Student 
{
  protected:
    int rollNo;
    string name;
    int biology, chemistry, physics;
    
  public:
    static int rollNumber;
    
    Student(string n, int b, int c, int p) : name(n), biology(b), chemistry(c), physics(p) 
	{
      rollNo = ++rollNumber;
    }
    
    int getTotal() 
	{
      return biology + chemistry + physics;
    }
};

int Student::rollNumber = 0;

int main() 
{
  int n, total;
  string name;
  int b, c, p;
  
  cout << "Enter the number of students: ";
  cin >> n;
  
  Student *students = new Student[n];
  
  for (int i = 0; i < n; i++) 
  {
    cout << "Enter name of student: ";
    cin >> name;
    
    cout << "Enter marks in Biology: ";
    cin >> b;
    
    cout << "Enter marks in Chemistry: ";
    cin >> c;
    
    cout << "Enter marks in Physics: ";
    cin >> p;
    
    students[i] = Student(name, b, c, p);
  }
  
  cout << "Roll No.\tName\tBiology\tChemistry\tPhysics\tTotal" << endl;
  
  for (int i = 0; i < n; i++) 
  {
    total = students[i].getTotal();
    cout << students[i].rollNo << "\t\t" << students[i].name << "\t" << students[i].biology << "\t\t" << students[i].chemistry << "\t\t" << students[i].physics << "\t\t" << total << endl;
  }
  
  return 0;
}

