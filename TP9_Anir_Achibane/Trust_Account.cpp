#include "Trust_Account.hpp"
#include "Account.hpp"
#include <iostream>

Trust_Account::Trust_Account(string name, double balance, double int_rate):
                Savings_Account(name, balance, int_rate), withdrawals(0){};

bool Trust_Account::deposit(double amount){
    if (amount >= bonus_threshold){
        amount += bonus_amount;
    }
    balance += amount;
    cout << "Deposited " << amount << " to " << *this << endl;
    return true;
};

bool Trust_Account::withdraw(double amount){
    if (withdrawals == max_withdrawals){
        cout << "Withdrawals limit reached for " << *this << endl;
        return false;
    }
    else if (balance*max_withdrawals_percent < amount){
        cout << "Failed Withdrawal of " << amount << " from " << *this << endl;
        return false;
    }
    
    else{
        withdrawals++;
        balance -= amount;
        cout << "Withdrew " << amount << " from " << *this << endl;
        return true;
    }
};

ostream& operator<<(ostream& cout, Trust_Account account){
    cout << "[ Trust_Account: " << account.name << ", Solde: " << account.balance
         << ", Taux: " << account.int_rate << "%, Retraits: " << account.withdrawals << " ]";
    return cout;
};