#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Savings_Account.h"

class Trust_Account : public Savings_Account
{
public:
    Trust_Account(std::string name, double balance = 0.0, double interest_rate);
    void withdraw(double amount);
    void deposit(double amount);
}

#endif
