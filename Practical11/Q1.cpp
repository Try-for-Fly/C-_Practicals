#include <iostream>
#include <stdlib.h>
using namespace std;

class cust_acc
{
private:
    float acc_balance;
    long int acc_num;

public:
    cust_acc()
    {
        cout << "This is a saving account" << endl;
    }

    cust_acc(long int an, float ab)
    {
        acc_balance = ab;
        acc_num = an;
    }

    ~cust_acc()
    {
        cout << "The account is closed" << endl;
    }

    void deposit(float ab)
    {
        acc_balance = ab;
        int dep_am;

        cout << "Enter the amount to deposit : ";
        cin >> dep_am;

        ab = ab + dep_am;

        cout << "Transaction is successful. Your new balance : " << ab << endl;
    }

    void withdraw(float ab)
    {
        acc_balance = ab;
        int with_am;

        cout << "Enter the amount to withdraw : ";
        cin >> with_am;

        if(with_am < ab)
        {
            cout << "Insufficient amount" << endl;
            exit(1);
        }
        else
        {
            ab = ab - with_am;
            cout << "Transaction is successful. Your new balance : " << ab << endl;
        }
    }

    void balance(float ab)
    {
        acc_balance = ab;

        cout << "Your account balance is : " << ab << endl;
    }
};
