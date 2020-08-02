#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include "I_Printable.h"

class Account : public I_Printable
{
private:
    std::string name;
    double balance;

protected:
    double get_balance() const;
    std::string get_name() const;

public:
    Account(std::string name, double balance = 0.0);
    virtual void withdraw(double amount) = 0;
    virtual void deposit(double amount) = 0;
    virtual void print(std::ostream &output) const override;
    ~Account() = default;
};

#endif
