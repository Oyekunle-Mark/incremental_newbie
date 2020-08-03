#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"

class Checking_Account : public Account
{
private:
    const double withdrawal_fee{1.5};

public:
    Checking_Account(std::string name, double balance = 0.0);
    virtual void withdraw(double amount) override;
    virtual void deposit(double amount) override;
    virtual void print(std::ostream &output) const override;
    virtual ~Checking_Account() = default;
};

#endif
