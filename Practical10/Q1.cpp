#include<iostream>
using namespace std;

class shape{
	public:
	void print(){
		cout<< "This is a shape" << endl;
	}
	
};

class polygon{
	public:
	void print(){
		cout<< "Polygon is a shape" << endl;
	}
		
};

class rectangle{
	public:
	void print(){
		cout<< "Rectangle is a polygon" << endl;
	}
		
};

class triangle{
	public:
	void print(){
		cout<< "Triangle is a polygon" << endl;
	}
		
};

class square{
	public:
	void print(){
		cout<< "Square is a rectangle" << endl;
	}
		
};

int main(){
	
	shape shape1;
	shape1.print();
	
	polygon polygon1;
	polygon1.print();
	
	rectangle rectangle1;
	rectangle1.print();
	
	triangle triangle1;
	triangle1.print();
	
	square square1;
	square1.print();
	
	
	return 0;
}
