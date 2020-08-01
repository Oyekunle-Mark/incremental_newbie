#include "Account_Utils.h"

int main()
{
    // ordinary account type
    std::vector<Account> account_vec;
    account_vec.push_back(Account{"Account 1"});
    account_vec.push_back(Account{"Account 2", 100.0});
    account_vec.push_back(Account{"Account 2", 353434.3});

    display_accounts(account_vec);
    deposit_all_accounts(account_vec, 2000);
    display_accounts(account_vec);
    withdraw_all_accounts(account_vec, 3000);
    display_accounts(account_vec);

    // savings account type
    std::vector<Savings_Account> savings_account_vec;
    savings_account_vec.push_back(Savings_Account{"Savings Account 1"});
    savings_account_vec.push_back(Savings_Account{"Savings Account 2", 500});
    savings_account_vec.push_back(Savings_Account{"Savings Account 3", 2324, 5});

    display_savings_accounts(savings_account_vec);
    deposit_all_savings_accounts(savings_account_vec, 500);
    display_savings_accounts(savings_account_vec);
    withdraw_all_savings_accounts(savings_account_vec, 600);
    display_savings_accounts(savings_account_vec);
}
