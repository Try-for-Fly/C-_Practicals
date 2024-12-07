#include <iostream>
using namespace std;

int main(){
	int i, j;
	
	cout<<"\t";

	for(j=1; j<=10; j++){
		cout<< j << "\t";
	}
	cout<<endl;
		
	for(i=1; i<=10; i++){
		cout<< i << "\t";
		for(j=1; j<=10; j++){
			cout<< i*j <<"\t";
		}
		cout<<endl;
	}
	return 0;
}


