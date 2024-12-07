#include <iostream>

using namespace std;

const int MAXQUEUE = 100;
const int TRUE = 1;
const int FALSE = 0;

class queue {
private:
    int index;
    int num[MAXQUEUE];
public:
    queue();

    void enqueue(int);

    int serve();

    int isempty();

    int isfull();

};

queue::queue() {
    index = 0;
}

void queue::enqueue(int n) {
    num[index++] = n;
}

int queue::isempty() {
    return index == 0 ? TRUE : FALSE;
}

int queue::serve() {
    int customer = num[0];
    for (int i = 0; i < index; ++i) {
        num[i] = num[i + 1];
    }
    num[index--] = 0;
    return customer;
}

int queue::isfull() {
    return index >= 100 ? TRUE : FALSE;
}

int main() {
    queue q1;
    q1.enqueue(23);
    cout << q1.serve() << endl;
}