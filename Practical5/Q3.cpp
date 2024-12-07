#include <iostream>

using namespace std;

class Triangle
{
    public:
        int base;
        int perpendicular; 
        int hypotenuse;
        
        double calculateArea() 
		{
            return (1/2) * base * perpendicular;
        }

        double calculatePerimeter() 
		{
            return base + perpendicular + hypotenuse;
        }    
};

int main ()
{
	Triangle tri1;

    tri1.base = 3;
    tri1.perpendicular = 4;
    tri1.hypotenuse = 5;
    
    cout << "Area of Triangle =  " << tri1.calculateArea() << endl;
    cout << "Perimeter of Triangle =  " << tri1.calculateVolume() << endl;
    
    return 0;
}
