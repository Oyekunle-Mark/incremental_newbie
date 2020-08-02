#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include <iostream>

class I_Printable
{
    friend std::ostream &operator<<(std::ostream &output, const I_Printable &rhs);

public:
    virtual void print(std::ostream &output) const = 0;
    ~I_Printable() = default;
};

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
