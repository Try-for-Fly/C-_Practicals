#include <iostream>
#include <cmath>

using namespace std;

constexpr double PI = 22.0 / 7.0;

class Circle 
{
	protected:
    	double radius;

	public:
    	Circle(double radius) : radius(radius) {}

    	double get_radius() const 
		{
        	return radius;
    	}
};

class Rectangle 
{
	protected:
    	double length, breadth;

	public:
    	Rectangle(double length, double breadth) : length(length), breadth(breadth) {}

    	double get_length() const 
		{
        	return length;
    	}
};

class Cylinder : public Circle, public Rectangle 
{
	public:
    	Cylinder(double radius, double length) : Circle(radius), Rectangle(length, 0) {}

    	double get_area() const 
		{
        	return 2 * PI * get_radius() * (get_radius() + get_length());
    	}
	
    	double get_volume() const 
		{
        	return PI * pow(get_radius(), 2) * get_length();
    	}
};

int main() 
{
    double radius, length;
    
    std::cout << "Enter the radius: ";
    std::cin >> radius;
    
    std::cout << "Enter the length: ";
    std::cin >> length;

    Cylinder cylinder(radius, length);
    
    std::cout << "Area: " << cylinder.get_area() << std::endl;
    std::cout << "Volume: " << cylinder.get_volume() << std::endl;

    return 0;
}
