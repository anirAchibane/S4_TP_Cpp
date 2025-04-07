#include "Account.hpp"
#include <iostream>
using namespace std;

Account::Account(string name, double balance)
        : name(name), balance(balance){};      

bool Account::deposit(double amount){
    balance += amount;
    cout << "Deposited " << amount << " to " << *this << endl;
    return true;
};

bool Account::withdraw(double amount){
    if (this->balance > amount){
        balance -= amount;
        cout << "Withdrew " << amount << " from " << *this << endl;
        return true;
    }

    cout << "Failed Withdrawal of " << amount << " from " << *this << endl;
    return false;
};

ostream& operator<<(ostream& cout, const Account& account){
    cout << "[Account: " << account.name << ", Solde: " << account.balance << " ]";
    return cout;
}