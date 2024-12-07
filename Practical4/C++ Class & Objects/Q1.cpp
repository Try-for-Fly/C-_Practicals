#include <iostream>
using namespace std;

class car{
	public:
		string brand;
		string model;
		int year;
};

int main(){

	car car1;
	
	car1.brand = "Land Rover";
	car1.model = "MSPR";
	car1.year = 2019;	
	
	cout<<"Brand of the car1: "<< car1.brand << endl;
	cout<<"Model of the car1: "<< car1.model << endl;
	cout<<"Year of the car1: "<< car1.year << endl;
		
	return 0;
}



