#include <iostream>
#include "Account.h"
#include "Saving_Account.h"

using namespace std;

int main() {
    Account sule{};
    sule.deposit(3000);
    sule.withdraw(1000);

    Account *p_acc{nullptr};
    p_acc = new Account;
    p_acc->deposit(244456789064);
    p_acc->withdraw(24464);

//    saving acc
    Saving_Account suleSave{};
    suleSave.deposit(4000);
    suleSave.withdraw(1000);

    Saving_Account *ptr_acc{nullptr};
    ptr_acc = new Saving_Account;
    ptr_acc->deposit(24789064);
    ptr_acc->withdraw(24464);
    

    return 0;
}
