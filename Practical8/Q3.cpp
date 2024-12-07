#include <iostream>

using namespace std;

double area(double side){
    return side * side;
}

double area(double length, double breadth){
    return length * breadth;
}

double areas(double radius){
    return 3.14 * radius * radius;
}

double areas(double base, double height){
    return 0.5 * base * height;
}

int main(){
    double side, length, breadth, radius, base, height;

    std::cout << "\nEnter side of square:";
    std::cin >> side;
    
    std::cout << "\nEnter length and breadth of rectangle:";
    std::cin >> length >> breadth;
    
    std::cout << "\nEnter radius of circle:";
    std::cin >> radius;
    
    std::cout << "\nEnter base and height of triangle:";
    std::cin >> base >> height;
    std::cout << "\n";
    
    cout << "Area of square is " << area(side) << endl;
    cout << "Area of rectangle is " << area(length, breadth) << endl;
	cout << "Area of circle is " << areas(radius) << endl;
    cout << "Area of triangle is " << areas(base, height) << endl;

	return 0;
}

