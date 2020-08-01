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

std::ostream &operator<<(std::ostream &output, const Account &rhs)
{
    output << "[" << rhs.get_name() << ", "
           << "Balance: " << rhs.get_balance() << "]"
           << std::endl;

    return output;
}
