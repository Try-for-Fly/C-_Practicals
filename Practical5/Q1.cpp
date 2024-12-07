#include <iostream>
using namespace std;



class Shape
{
	protected:
		float area, width, height;
	public:
	void set_data (float a, float b)
	{
		width = a; height = b;
	}


	shape(float w, float h)
	{
		width=w;
		height=h;
	}

	float AreaTriangle(float w, float h)
	{
		area=w*h*0.5;
		return area;
	
	}
	float AreaRectangle(float w, float h)
	{
		area=w*h;
		return area;
	}
};

int main()
{
	Shape obj;	
	float width, height;
	cout << "Enter the width: ";
	cin >> width;
	cout << "Enter the height: ";
	cin >> height;
	
	
	cout << "Area of tringle: " << obj.AreaTriangle(width,height) << endl;
	cout << "Area of rectangle: " << obj.AreaRectangle(width,height) << endl;
}



