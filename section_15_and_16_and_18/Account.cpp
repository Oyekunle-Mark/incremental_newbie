#include <iostream>
#include "Account.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

Account::Account(const std::string name, double balance)
    : name{name}, balance{balance}
{
    if (balance < 0.0)
        throw IllegalBalanceException{};
}

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
        throw InsufficientFundsException{};
    else
    {
        balance -= amount;
    }
}

double Account::get_balance() const
{
    return balance;
}

std::string Account::get_name() const
{
    return name;
}

void Account::print(std::ostream &output) const
{
    output << "[" << this->get_name() << ", "
           << "Balance: " << this->get_balance() << "]"
           << std::endl;
}
