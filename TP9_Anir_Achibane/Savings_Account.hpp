#ifndef SAVINGS_ACCOUNT_HPP
#define SAVINGS_ACCOUNT_HPP

#include "Account.hpp"
#include <iostream>

class Savings_Account : public Account{
    protected:
        /* on a changé le statut de def_int_rate de private à protected pour 
           que les classes filles aient accès à cet attribut lors de la construction
        */
        static constexpr double def_int_rate = 0.0;
        double int_rate;
    public:
        Savings_Account(string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
        bool deposit(double amount);
        //withdraw est hérité de la classe mère: Account
        friend ostream& operator<<(ostream& cout, Savings_Account& account);

};

#endif 
