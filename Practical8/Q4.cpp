#include <iostream>
using namespace std;

class Counter{
    private:
        int num1, num2;

	public:
    	Counter(){
        	num1 = 0;
        	num2 = 0;
    	}

    	Counter(int n1, int n2){
        	num1 = n1;
        	num2 = n2;
    	}

    	Counter operator--(){
        	num1--;
        	num2--;
        	return *this;
    	}

    	Counter operator++(){
        	num1++;
        	num2++;
        	return *this;
    	}

    	void display(){
        	cout << num1 << "\n" << num2 << endl;
    	}
};

int main(){
    int n1, n2;

    cout << "Enter two numbers:";
    cin >> n1 >> n2;
    cout << "\n";

    Counter c(n1, n2);
	cout << "After Decrementing" << endl;
    --c;
    c.display();

    cout << "After Incrementing" << endl;
    ++c;
    c.display();

	return 0;
}

