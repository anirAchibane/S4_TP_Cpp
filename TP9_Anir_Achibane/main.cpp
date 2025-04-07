#include <iostream>
#include <vector>
#include "Account.hpp"
#include "Savings_Account.hpp"
#include "Checking_Account.hpp"
#include "Trust_Account.hpp"
#include "Account_Util.hpp"

int main() {
    std::cout.precision(2);
    std::cout << std::fixed;

    // Accounts
    std::vector<Account> accounts{
        Account{}, 
        Account{"Larry"},
        Account{"Moe", 2000}, 
        Account{"Curly", 5000}
    };

    display(accounts);
    cout << endl;
    deposit(accounts, 1000);
    cout << endl;
    withdraw(accounts, 2000);
    cout << endl;

    // Savings
    std::vector<Savings_Account> sav_accounts{
        Savings_Account{},
        Savings_Account{"Superman"},
        Savings_Account{"Batman", 2000},
        Savings_Account{"Wonderwoman", 5000, 5.0}
    };

    display(sav_accounts);
    cout << endl;
    deposit(sav_accounts, 1000);
    cout << endl;
    withdraw(sav_accounts, 2000);
    cout << endl;

    // Checking
    std::vector<Checking_Account> check_accounts{
        Checking_Account{},
        Checking_Account{"Kirk"},
        Checking_Account{"Spock", 2000},
        Checking_Account{"Bones", 5000}
    };

    display(check_accounts);
    cout << endl;
    deposit(check_accounts, 1000);
    cout << endl;
    withdraw(check_accounts, 2000);
    cout << endl;

    // Trust
    std::vector<Trust_Account> trust_accounts{
        Trust_Account{},
        Trust_Account{"Athos", 10000, 5.0},
        Trust_Account{"Porthos", 20000, 4.0},
        Trust_Account{"Aramis", 30000}
    };

    display(trust_accounts);
    cout << endl;
    deposit(trust_accounts, 1000);
    cout << endl;
    withdraw(trust_accounts, 3000);
    cout << endl;

    for (int i = 1; i <= 5; ++i)
        withdraw(trust_accounts, 1000);

    return 0;
}