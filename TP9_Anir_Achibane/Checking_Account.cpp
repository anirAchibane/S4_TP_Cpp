#include "Checking_Account.hpp"
#include <iostream>

Checking_Account::Checking_Account(string name, double balance):
                  Account(name, balance){};

bool Checking_Account::withdraw(double amount){
    if (balance > amount + per_check_fee){
        balance -= amount + per_check_fee;
        cout << "Withdrew " << amount << " from " << *this << endl;
        return true;
    }
    
    cout << "Failed Withdrawal of " << amount << " from " << *this << endl;
    return false;

};

ostream& operator<<(ostream& cout, Checking_Account& account){
    cout << "[ Checking_Account: " << account.name << ", Solde: " << account.balance << " ]";
    return cout;
};