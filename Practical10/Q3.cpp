#include<iostream>
using namespace std;

class rectangle{
	protected:
		float length = 3.4;
		float width = 2.1;
};

class area : public rectangle{
	public:
		float calc(){
			return length*width;
		}
};

int main(){
	
	cout<<"Length of the rectangle : 3.4\n";
	cout<<"Width of the rectangle : 2.1\n";
	
	area a;
	
	cout << "Area of the rectangle : " << a.calc();
	
	return 0;
}
