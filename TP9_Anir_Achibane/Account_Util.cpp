#include "Account.hpp"
#include "Savings_Account.hpp"
#include "Checking_Account.hpp"
#include "Trust_Account.hpp"
#include <iostream>
#include <vector>
#include "Account_Util.hpp"
using namespace std;

void display(const vector<Account>& accounts){
    cout << "=== Accounts===========================================" << endl;
    for(auto& acc : accounts){
        cout << acc << endl;
    }
};
void display(const vector<Savings_Account>& accounts){
    cout << "===Savings Accounts===========================================" << endl;
    for(auto& acc : accounts){
        cout << acc << endl;
    }
};
void display(const vector<Checking_Account>& accounts){
    cout << "===Checking Accounts===========================================" << endl;
    for(auto& acc : accounts){
        cout << acc << endl;
    }
};
void display(const vector<Trust_Account>& accounts){
    cout << "===Trust Accounts===========================================" << endl;
    for(auto& acc : accounts){
        cout << acc << endl;
    }
};

void deposit( vector<Account>& accounts, double amount){
    for(auto& acc : accounts){
        acc.deposit(amount);
    }
};
void deposit( vector<Savings_Account>& accounts, double amount){
    for(auto& acc : accounts){
        acc.deposit(amount);
    }
};
void deposit( vector<Checking_Account>& accounts, double amount){
    for(auto& acc : accounts){
        acc.deposit(amount);
    }
};
void deposit( vector<Trust_Account>& accounts, double amount){
    for(auto& acc : accounts){
        acc.deposit(amount);
    }
};

void withdraw( vector<Account>& accounts, double amount){
    for(auto& acc : accounts){
        acc.withdraw(amount);
    }
};
void withdraw( vector<Savings_Account>& accounts, double amount){
    for(auto& acc : accounts){
        acc.withdraw(amount);
    }
};
void withdraw( vector<Checking_Account>& accounts, double amount){
    for(auto& acc : accounts){
        acc.withdraw(amount);
    }
};
void withdraw( vector<Trust_Account>& accounts, double amount){
    for(auto& acc : accounts){
        acc.withdraw(amount);
    }
};