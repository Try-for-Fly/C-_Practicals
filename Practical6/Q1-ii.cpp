#include <iostream>
using namespace std;

int main(){
	
	int n=0, i=0, sum=0;
	
	cout<< "Enter a positive number: ";
	cin>>n;
	
	do{
		sum = sum + i;
		i++;
	}while(i<=n);
	
	cout<< "The sum of the positive numbers is " << sum;
	
	return 0;
}

