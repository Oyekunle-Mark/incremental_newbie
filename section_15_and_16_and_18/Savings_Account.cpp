#include <iostream>
#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double interest_rate)
    : Account(name, balance), interest_rate{interest_rate} {}

void Savings_Account::deposit(double amount)
{
    amount += amount * (interest_rate / 100.0);
    Account::deposit(amount);
}

void Savings_Account::withdraw(double amount)
{
    Account::withdraw(amount);
}

void Savings_Account::print(std::ostream &output) const
{
    output << "[" << this->get_name() << ", "
           << "Balance: " << this->get_balance() << ", "
           << "Interest rate: " << this->interest_rate
           << "]"
           << std::endl;
}
