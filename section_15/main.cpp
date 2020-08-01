#include "Savings_Account.h"
#include "Account_Utils.h"

int main()
{
    std::vector<Account> account_vec;
    account_vec.push_back(Account{"User 1"});
    account_vec.push_back(Account{"User 2", 100.0});
    account_vec.push_back(Account{"User 2", 353434.3});

    display_accounts(account_vec);
    deposit_all_accounts(account_vec, 2000);
    withdraw_all_accounts(account_vec, 3000);
    display_accounts(account_vec);
}
