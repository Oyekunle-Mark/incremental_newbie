#include <iostream>
#include "Checking_Account.h"

Checking_Account::Checking_Account(const std::string name, double balance)
    : Account(name, balance) {}

void Checking_Account::withdraw(double amount)
{
    amount += withdrawal_fee;
    Account::withdraw(amount);
}

void Checking_Account::deposit(double amount)
{
    Account::deposit(amount);
}

void Checking_Account::print(std::ostream &output) const
{
    output << "[" << this->get_name() << ", "
           << "Balance: " << this->get_balance() << ", "
           << "Withdrawal fee: " << this->withdrawal_fee
           << "]"
           << std::endl;
}
