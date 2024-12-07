#include <iostream>
using namespace std;

class complex
{
   public :
      int real, img;
};

int main()
{
   complex a, b, c, d;

   cout << "Enter a and b where a + ib is the first complex number.";
   cout << "\na = ";
   cin >> a.real;
   cout << "b = ";
   cin >> a.img;
   cout << "Enter c and d where c + id is the second complex number.";
   cout << "\nc = ";
   cin >> b.real;
   cout << "d = ";
   cin >> b.img;

   c.real = a.real + b.real;
   c.img = a.img + b.img;

   if (c.img >= 0)
      cout << "\nSum of two complex numbers = " << c.real << " + " << c.img << "i";
   else
      cout << "\nSum of two complex numbers = " << c.real << " " << c.img << "i";

   d.real = a.real - b.real;
   d.img = a.img - b.img;

   if (d.img >= 0)
      cout << "\nSum of two complex numbers = " << d.real << " + " << d.img << "i";
   else
      cout << "\nSum of two complex numbers = " << d.real << " " << d.img << "i";


   return 0;
}
