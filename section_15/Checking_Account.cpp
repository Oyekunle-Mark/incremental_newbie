#include "Checking_Account.h"

Checking_Account::Checking_Account(const std::string name, double balance)
    : Account(name, balance) {}

void Checking_Account::withdraw(double amount)
{
    amount += withdrawal_fee;
    Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &output, const Checking_Account &rhs)
{
    output << "[" << rhs.get_name() << ", "
           << "Balance: " << rhs.get_balance() << ", "
           << "Withdrawal fee: " << rhs.withdrawal_fee
           << "]"
           << std::endl;

    return output;
}
