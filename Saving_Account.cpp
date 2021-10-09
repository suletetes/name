//
// Created by sule abdul on 08/10/2021.
//

#include "Saving_Account.h"
#include <iostream>

using namespace std;

/*
Saving_Account::Saving_Account()
        : int_rate(3.00) {
}
Saving_Account::~Saving_Account() {
}
void Saving_Account::deposit(double amount) {
    cout << "Account deposit called with " << amount << endl;
}
void Saving_Account::withdraw(double amount) {
    cout << "Account deposit called with " << amount << endl;
}
*/

Saving_Account::Saving_Account(double balance, double int_rate) : Account(balance), int_rate(int_rate) {

}

Saving_Account::Saving_Account() : Saving_Account(0.0, 0.0) {

}

void Saving_Account::deposit(double amount) {
    amount = amount + (amount * int_rate / 100);
    Account::deposit(amount);
}

ostream &operator<<(ostream &os, const Saving_Account &account){
    os << "Savings account balance:" << account.balance << "interest rate:" << account.int_rate;
}