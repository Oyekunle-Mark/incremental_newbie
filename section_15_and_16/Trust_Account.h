#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Savings_Account.h"

class Trust_Account : public Savings_Account
{
private:
    const double deposit_bonus{50.0};
    const size_t max_withdraw{3};
    const double withdrawal_percentage_allowed{0.2};
    size_t withdrawal_count;

public:
    Trust_Account(std::string name, double balance = 0.0, double interest_rate = 3.0);
    virtual void withdraw(double amount) override;
    virtual void deposit(double amount) override;
    ~Trust_Account() = default;
};

#endif
