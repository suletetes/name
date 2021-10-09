
#ifndef DERIVINGCLASSES_SAVING_ACCOUNT_H
#define DERIVINGCLASSES_SAVING_ACCOUNT_H
#include "Account.h"
#include <iostream>

using namespace std;

class Saving_Account: public Account{
public:
/*
    double int_rate;
    Saving_Account();
    ~Saving_Account();
    void deposit(double amount);
    void withdraw(double amount);
*/
    friend ostream &operator<<ostream (ostream &os, const Saving_Account &account);
protected:
    double int_rate;
public:
    Saving_Account();
    Saving_Account(double balance, double int_rate);
    void deposit(double amount);



};


#endif //DERIVINGCLASSES_SAVING_ACCOUNT_H
