#include <iostream>
using namespace std;

class Box {
public:
  Box(double x, double y, double z)
   : length(x), breadth(y), height(z) {}
  
  double volume() const {
   return lenght * breadth * height; 
   } 

private:
  double length;
  double breadth;
  double height;
}


int main(){
	
	return 0;
}


