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
    double get_balance();

public:
    Account(std::string name, double balance = 0.0);
    void withdraw(double amount);
    void deposit(double amount);
};

#endif
