#include <iostream>

using namespace std;

class Bank
{
    private:

    int account_num;
    int balance;

    public:

    void set()
    {
        cout << "Enter the Account number: ";
        cin >> account_num;

        cout << "Enter the balance: " ;
        cin >> balance;
    }

    void get()
    {
        cout << "-------------------------------------" << endl;
        cout << "Account Number: " << account_num << endl;
        cout << "Account Balance: " << balance << endl;
        cout << "-------------------------------------" << endl;
    }

};

int main()
{
    Bank bankAccount;

    bankAccount.set();
    bankAccount.get();
}