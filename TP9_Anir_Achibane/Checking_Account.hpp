#ifndef CHECKING_ACCOUNT_HPP
#define CHECKING_ACCOUNT_HPP

#include "Account.hpp"
#include <iostream>

class Checking_Account : public Account{
    public: 
        static constexpr double per_check_fee = 1.50;
        
        Checking_Account(string name = def_name, double balance = def_balance);
        bool withdraw(double amount);
        friend ostream& operator<<(ostream& cout, Checking_Account& account);
};

#endif 
