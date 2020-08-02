#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

class Savings_Account : public Account
{
protected:
    double interest_rate;

public:
    Savings_Account(std::string name, double balance = 0.0, double interest_rate = 3.0);
    virtual void withdraw(double amount) override;
    virtual void deposit(double amount) override;
    virtual void print(std::ostream &output) const override;
    virtual ~Savings_Account() = default;
};

#endif
