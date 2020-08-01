#include "Account_Utils.h"

void display_accounts(const std::vector<Account> &accounts)
{
    for (const Account &account : accounts)
        std::cout << account;
}

void deposit_all_accounts(std::vector<Account> &accounts, double amount)
{
    for (Account &account : accounts)
        account.deposit(amount);
}

void withdraw_all_accounts(std::vector<Account> &accounts, double amount)
{
    for (Account &account : accounts)
        account.withdraw(amount);
}
