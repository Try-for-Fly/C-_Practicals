#include <iostream>

using namespace std;

template<typename T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    T add() {
        return num1 + num2;
    }
    
    T multiply() {
        return num1 * num2;
    }

    T subtract() {
        return num1 - num2;
    }


    T divide() {
        if (num2 == 0) {
            cout << "Cannot divide by zero" << endl;
            return 0;
        } else {
            return num1 / num2;
        }
    }
};

int main() {
    Calculator<int> intCalc(20, 2);
    cout << "Addition = " << intCalc.add() << endl;
    cout << "Subtraction = " << intCalc.subtract() << endl;
    cout << "Multiplication = " << intCalc.multiply() << endl;
    cout << "Division = " << intCalc.divide() << endl;

    return 0;
}
