#include <iostream>
using namespace std;

double fahrenheitToCelsius(double fahrenheit)
 {
    double celsius;

    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    return celsius;
 }
 
 double CelsiusTofahrenheit(double celsius)
 {
    double fahrenheit;

    fahrenheit = (celsius + 32.0) * 9.0 / 5.0;
    return fahrenheit;
 }
 
 int main()
 {
    double fahrenheit,celsius;
	int input;

    cout << "1. Convert Fahrenheit into Centigrade\n2. Convert Centigrade into Fahrenheit\nInput your choice"<<endl;
    cin  >> input;
     
	switch(input){
		case 1:
			cout << "\nEnter the temperature in Fahrenheight : ";
			cin>>fahrenheit;
    		cout << "Temperature in Celsius = "
			<< fahrenheitToCelsius(fahrenheit)<<"\n" <<endl;
			break;
		case 2:
			cout << "Enter the temperature in Celsius : ";
			cin>>celsius;
			cout << "Temperature in Fahrenheight = "
               << CelsiusTofahrenheit(celsius)<<"\n"  <<endl;
            break;
	}           
	return 0;
 }
 
 
 
