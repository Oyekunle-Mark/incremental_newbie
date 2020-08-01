#include "Account_Utils.h"

void display_accounts(const std::vector<Account> &accounts)
{
    std::cout << "\nDisplaying all accounts\n"
              << std::endl;

    for (const Account &account : accounts)
        std::cout << account;
}

void deposit_all_accounts(std::vector<Account> &accounts, double amount)
{
    std::cout << "\nDepositing " << amount << " to all accounts\n"
              << std::endl;

    for (Account &account : accounts)
        account.deposit(amount);
}

void withdraw_all_accounts(std::vector<Account> &accounts, double amount)
{
    std::cout << "\nWithdrawing " << amount << " from all accounts\n"
              << std::endl;

    for (Account &account : accounts)
        account.withdraw(amount);
}
