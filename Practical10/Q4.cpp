#include<iostream>
using namespace std;

class Sweet {
    protected:
        int totalSweets;
    public:
        Sweet() {
            totalSweets = 0;
        }
        void setTotalSweets(int totalSweets) {
            this->totalSweets = totalSweets;
        }
        int getTotalSweets() {
            return totalSweets;
        }
};

class Chocolate : virtual public Sweet {
    protected:
        int chocolates;
    public:
        Chocolate() {
            chocolates = 0;
        }
        void setChocolates(int chocolates) {
            this->chocolates = chocolates;
        }
        int getChocolates() {
            return chocolates;
        }
};

class IceCream : virtual public Sweet {
    protected:
        int iceCreams;
    public:
        IceCream() {
            iceCreams = 0;
        }
        void setIceCreams(int iceCreams) {
            this->iceCreams = iceCreams;
        }
        int getIceCreams() {
            return iceCreams;
        }
};

class Basket : public Chocolate, public IceCream {
    public:
        Basket() {
            totalSweets = 0;
        }
        int getTotalSweets() {
            totalSweets = chocolates + iceCreams;
            return totalSweets;
        }
};

int main() {
    Basket basket;
    int chocolates, iceCreams;
    cout << "Enter the number of Chocolates : ";
    cin >> chocolates;
    cout << "Enter the number of Ice Creams : ";
    cin >> iceCreams;
    basket.setChocolates(chocolates);
    basket.setIceCreams(iceCreams);
    cout << endl << "Number of Chocolates : " << basket.getChocolates() << endl;
    cout << "Number of Ice Creams : " << basket.getIceCreams() << endl;
    cout << "Total number of Sweets : " << basket.getTotalSweets() << endl;
    return 0;
}
