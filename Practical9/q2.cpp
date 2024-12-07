#include <iostream>

using namespace std;

class Vegetable 
{
  protected:
    int numVegetables;
    
  public:
    Vegetable(int n) : numVegetables(n) {}
    
	virtual int getNumVegetables() 
	{
      return numVegetables;
    }
};

class Carrot: public Vegetable 
{
  public:
    Carrot(int n) : Vegetable(n) {}
};

class Potato: public Vegetable 
{
  public:
    Potato(int n) : Vegetable(n) {}
};

int main() 
{
  Carrot car(10);
  Potato pot(20);
  
  int total = car.getNumVegetables() + pot.getNumVegetables();
  
  cout << "Number of Carrots: " << car.getNumVegetables() << endl;
  cout << "Number of Potatoes: " << pot.getNumVegetables() << endl;
  cout << "Total Number of Vegetables: " << total << endl;
  
  return 0;
}
