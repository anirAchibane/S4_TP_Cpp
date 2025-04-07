#include "Savings_Account.hpp"
#include <iostream>

Savings_Account::Savings_Account(string name, double balance, double int_rate):
            Account(name, balance), int_rate(int_rate){};

bool Savings_Account::deposit(double amount){
    balance += amount * (1 + int_rate/100);
    cout << "Deposited " << amount << " to " << *this << endl;
    return true;
};

ostream& operator<<(ostream& cout, Savings_Account& account){
    cout << "[Savings Account: " << account.name << ", Solde: " << account.balance << ", Taux: " << account.int_rate << " ]";
    return cout;

};