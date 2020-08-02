#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include <iostream>

class Account
{
private:
    std::string name;
    double balance;
    friend std::ostream &operator<<(std::ostream &os, const Account &rhs);

protected:
    double get_balance() const;
    std::string get_name() const;

public:
    Account(std::string name, double balance = 0.0);
    virtual void withdraw(double amount) = 0;
    virtual void deposit(double amount) = 0;
    ~Account() = default;
};

#endif
