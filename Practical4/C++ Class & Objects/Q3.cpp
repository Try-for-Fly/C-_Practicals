#include <iostream>
#include <conio.h>
using namespace std;

class Int{
 private:
  int var;
  
 public:
 	
  	Int(){
   		var = 0;
 	 }
 
 	Int(int x){
   		var = x;
  	}
  
  	void display(){
   		cout << var << endl;
  	}
  
  	void add(Int x, Int y){
   		var = x.var + y.var;
  	}
};

int main(){
	
	Int a=10, b=20;
 	Int n;
 
 	n.add(a,b);
 	n.display();
}


