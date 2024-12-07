#include <iostream>
using namespace std;

class room{
	public:
		int length;
		int width;
		int height;
};

int main(){
	
	room room1;
	
	room1.length = 13;
	room1.width = 12;
	room1.height = 9;	
	
	int area = room1.length * room1.width;
	int vol = room1.length * room1.width * room1.height;
	
	cout<<"Area of the room (In square feet): "<< area << endl;
	cout<<"Volume of the room (In cubic feet): "<< vol << endl;
	
	return 0;
}





