#include <iostream>
#include <string>

using namespace std;

template <typename T>
class AddValues {
private:
    T value1, value2;

public:
    AddValues(T v1, T v2) {
        value1 = v1;
        value2 = v2;
    }

    T add() {
        return value1 + value2;
    }
};

template <>
class AddValues<string> {
private:
    string str1, str2;

public:
    AddValues(string s1, string s2) {
        str1 = s1;
        str2 = s2;
    }

    string concatenate() {
        return str1 + str2;
    }
};

int main() {
    AddValues<int> intValues(5, 10);
    cout << "Integer Total = " << intValues.add() << endl;

    AddValues<float> floatValues(2.5, 3.5);
    cout << "Float Total = " << floatValues.add() << endl;

    AddValues<string> stringValues("Hello", "World");
    cout << "String Concatenation = " << stringValues.concatenate() << endl;

    return 0;
}
