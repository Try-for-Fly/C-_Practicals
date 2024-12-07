#include <iostream>
using namespace std;

int main(){
	int n, sum=0, i=0;
	
	cout<<"Insert a number: ";
	cin>>n;
	
	for(i=1; i<=n; i++){
		sum=sum+i;
	}
	
	cout<<"Sum of the first "<<n<<" numbers: "<<sum;
		
	return 0;
}


