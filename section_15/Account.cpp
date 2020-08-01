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
        std::cout << "Insufficient balance: " << (*this) << std::endl;
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

std::ostream &operator<<(std::ostream &output, const Account &rhs)
{
    output << "[" << rhs.name << " "
           << "Balance: " << rhs.balance << "]"
           << std::endl;

    return output;
}
