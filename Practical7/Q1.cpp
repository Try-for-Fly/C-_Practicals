#include <iostream>

class Class1 
{
    public:
    	Class1() 
		{ 
            std::cout << "Class1 object created" << std::endl;
        }
};

int main() 
{
    Class1 obj; 
    
    return 0;
}
