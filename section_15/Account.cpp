#include "Account.h"

Account::Account(const std::string name, double amount)
    : name{name}, balance{amount} {}

void Account::deposit(double amount)
{
    if (amount < 0.0)
        std::cout << "Cannot deposit negative amount" << std::endl;
    else
    {
        balance += amount;
    }
}

void Account::withdraw(double amount)
{
    if (amount > balance)
        std::cout << "Insufficient balance: " << (*this) << std::endl;
    else
    {
        balance -= amount;
    }
}