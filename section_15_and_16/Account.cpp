#include "Account.h"

Account::Account(const std::string name, double balance)
    : name{name}, balance{balance} {}

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
        std::cout << "Cannot withdraw " << amount << " "
                  << (*this) << std::endl;
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
