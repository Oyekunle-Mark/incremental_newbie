#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

class Savings_Account : public Account
{
    friend std::ostream &operator<<(std::ostream &output, const Savings_Account &rhs);

protected:
    double interest_rate;

public:
    Savings_Account(std::string name, double balance = 0.0, double interest_rate = 3.0);
    void deposit(double amount);
};

#endif
