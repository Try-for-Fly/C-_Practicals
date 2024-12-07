#include <iostream>
#include <string>

using namespace std;

class Marks 
{
	public:
  		int roll_number;
  		string name;
  		int marks;

  	Marks() 
  	{
    	static int roll = 1001;
    	roll_number = roll++;
  	}

  	void get_data() 
  	{
    	cout << "Enter name: ";
    	cin >> name;
    	cout << "Enter marks: ";
    	cin >> marks;
  	}
};

class Database : public Marks 
{
	public:
  		void get_data() 
  		{
    		Marks::get_data();
    		cout << "Database marks: " << marks << endl;
  		}
};

class Statistics : public Marks 
{
	public:
  		void get_data() 
  		{
    		Marks::get_data();
    		cout << "Statistics marks: " << marks << endl;
  		}
};

class Data_Structures : public Marks 
{
	public:
  		void get_data() 
  		{
    		Marks::get_data();
    		cout << "Data Structures marks: " << marks << endl;
  		}
};

int main() 
{
  	int n;
  	cout << "Enter the number of students: ";
  	cin >> n;

  	Database b[n];
    Statistics s[n];
  	Data_Structures d[n];

  	for (int i = 0; i < n; i++) 
  	{
    	cout << "Enter data for student " << i + 1 << ":" << endl;
    
    	cout << "Database: " << endl;
    	b[i].get_data();
    
    	cout << "Statistics: " << endl;
    	s[i].get_data();
    
    	cout << "Data Structures: " << endl;
    	d[i].get_data();
    
    	cout << endl;
  	}

  	int total_marks, avg_marks;
  	total_marks = avg_marks = 0;
  
  	for (int i = 0; i < n; i++) 
  	{
    	total_marks = total_marks + b[i].marks + s[i].marks + d[i].marks;
  	}
  
  	avg_marks = total_marks / (3 * n);

  	cout << "Average marks of the class: " << avg_marks << endl;
  
  	return 0;
}
