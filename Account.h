//
// Created by sule abdul on 08/10/2021.
//

#ifndef DERIVINGCLASSES_ACCOUNT_H
#define DERIVINGCLASSES_ACCOUNT_H
#include <iostream>

using namespace std;
class Account {
public:
    double balance;
    string name;

    virtual void deposit(double amount);
    void withdraw(double amount);

    Account();
    ~Account();

};


#endif //DERIVINGCLASSES_ACCOUNT_H
