#include <iostream>
using namespace std;

double add(double x, double y){
	return x+y;
}

double sub(double x, double y){
	if(x<y)
		return y-x;
	else	
		return x-y;
}

double mul(double x, double y){
	return x*y;
}

double div(double x, double y){
	return x/y;
}

int mod(int x, int y){
	return x%y;
}

int main(){
	
	while(1){
		int choice, x, y;
	
		cout << "1. Add\n";
		cout << "2. Subtract\n";
		cout << "3. Multiply\n";
		cout << "4. Divide\n";
		cout << "5. Modulus\n";
		cout << "6. Exit\n";
		
		cout << "Enter your choice: ";
		cin >> choice;
		
		cout << "Enter your two numbers: ";
		cin >> x >> y;
		
		switch(choice){
			case 1:
			cout << add(x, y) << endl;	
			break;
			
			case 2:
			cout << sub(x, y) << endl;	
			break;
			
			case 3:
			cout << mul(x, y) << endl;	
			break;
			
			case 4:
			cout <<  div(x, y) << endl;	
			break;
			
			case 5:
			cout <<  mod(x, y) << endl;	
			break;
			
			case 6:
			exit(1);
		}
		
	}
		
	return 0;
}

