#include <iostream>
using namespace std;

int displayValue(int x){
	cout << "x = " << x << endl;
}

char displayValue(char x){
	cout << "x = " << x << endl;
}

double displayValue(double x){
	cout << "x = " << x << endl;
}

int main(){
	
	displayValue(20);
	displayValue('@');
	displayValue(2.5);
	
	return 0;
}

