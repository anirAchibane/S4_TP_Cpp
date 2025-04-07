#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream>
using namespace std;

class Account{

    protected:
        /* on a changé le statut de def_name et def_balance de private à protected pour 
           que les classes filles aient accès à ces attribut lors de la construction
        */
        static constexpr const char* def_name = "Unnamed";
        static constexpr double def_balance = 0.0;
        string name;
        double balance;

    public:
        Account(string name = def_name, double balance = def_balance);
        bool deposit(double amount);
        bool withdraw(double amount);
        friend ostream& operator<<(ostream& cout, const Account& account);

};

#endif