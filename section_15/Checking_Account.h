#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"

class Checking_Account : public Account
{
private:
    const double withdrawal_fee{1.5};
    friend std::ostream &operator<<(std::ostream &output, const Checking_Account &rhs);

public:
    Checking_Account(std::string name, double balance);
    void withdraw(double amount);
};

#endif
