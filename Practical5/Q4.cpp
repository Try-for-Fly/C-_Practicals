#include <iostream>

using namespace std;

class Triangle
{
    private:
        int base;
        int perpendicular; 
        int hypotenuse;
      
	public:
	    Wall(int b, int p, int h) 
		{
            base = b;
            perpendicular = p;
            hypotenuse = h;
        }
		    
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
	Triangle tri1(3, 4, 5);
    
    cout << "Area of Triangle =  " << tri1.calculateArea() << endl;
    cout << "Perimeter of Triangle =  " << tri1.calculateVolume() << endl;
    
    return 0;
}
