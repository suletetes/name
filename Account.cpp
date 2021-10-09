//
// Created by sule abdul on 08/10/2021.
//

#include "iostream"
#include "Account.h"

using namespace std;

void Account::deposit(double amount) {
    balance += amount;
    cout << "Account deposit called with " << amount << endl;

}

/*Account::Account()
        : Account(0.0) {

}*/

void Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        cout << "Account withdraw called with " << amount << endl;
    } else
        cout << "Insufficient funds" << endl;


}

ostream &operator<<(ostream &os, const Account &account){
    os << "Account balance: " << account.balance;
    return os;
}

Account::~Account() {

}
