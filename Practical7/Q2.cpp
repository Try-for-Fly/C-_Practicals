#include <iostream>

using namespace std;

class MyVector 
{
    private:
        int x;
        int y;
        
    public:
        MyVector() 
		{ 
            x = 0;
            y = 0;
        }
        MyVector(int x, int y) 
		{ 
            this->x = x;
            this->y = y;
        }
        
        MyVector operator+(const MyVector &obj) 
		{
            MyVector res;
            res.x = x + obj.x;
            res.y = y + obj.y;
            return res;
        }
         
        MyVector operator*(int scalar) 
		{
            MyVector res;
            res.x = x * scalar;
            res.y = y * scalar;
            return res;
        }
        
        void print() 
		{
            cout << "(" << x << ", " << y << ")" << endl;
        }
};

int main() 
{
    MyVector v1(3, 4);
    MyVector v2(1, 2);
    MyVector v3;
    v3 = v1 + v2; 
    v3.print(); 
    v3 = v3 * 2; 
    v3.print(); 

    return 0;
}
