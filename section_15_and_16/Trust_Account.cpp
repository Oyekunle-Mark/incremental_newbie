#include <iostream>
#include "Trust_Account.h"

Trust_Account::Trust_Account(const std::string name, double balance, double interest_rate)
    : Savings_Account(name, balance, interest_rate), withdrawal_count{0} {}

void Trust_Account::deposit(double amount)
{
    amount >= 5000.0 ? (amount + deposit_bonus) : amount;
    Savings_Account::deposit(amount);
}

void Trust_Account::withdraw(double amount)
{
    if (withdrawal_count >= max_withdraw)
        std::cout << "Withdrawal count exceeded" << std::endl;
    else
    {
        if (amount > withdrawal_percentage_allowed * get_balance())
            std::cout << "Withdrawal must be less than " << withdrawal_percentage_allowed << " of balance" << std::endl;
        else
        {
            Savings_Account::withdraw(amount);
            ++withdrawal_count;
        }
    }
}
