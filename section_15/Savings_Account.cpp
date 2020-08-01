#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double interest_rate)
    : Account(name, balance), interest_rate{interest_rate} {}

void Savings_Account::deposit(double amount)
{
    amount += amount * (interest_rate / 100.0);
    Account::deposit(amount);
}
