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

    // checking account type
    std::vector<Checking_Account> checking_account_vec;
    checking_account_vec.push_back(Checking_Account{"Checking Account 1"});
    checking_account_vec.push_back(Checking_Account{"Checking Account 2", 941});
    checking_account_vec.push_back(Checking_Account{"Checking Account 3", 12});

    display_checking_accounts(checking_account_vec);
    deposit_all_checking_accounts(checking_account_vec, 320);
    display_checking_accounts(checking_account_vec);
    withdraw_all_checking_accounts(checking_account_vec, 400);
    display_checking_accounts(checking_account_vec);

    // trust account type
    std::vector<Trust_Account> trust_account_vec;
    trust_account_vec.push_back(Trust_Account{"Trust Account 1"});
    trust_account_vec.push_back(Trust_Account{"Trust Account 2", 1500, 7});
    trust_account_vec.push_back(Trust_Account{"Trust Account 3", 43000, 10});

    display_trust_accounts(trust_account_vec);
    deposit_all_trust_accounts(trust_account_vec, 6000);
    display_trust_accounts(trust_account_vec);
    withdraw_all_trust_accounts(trust_account_vec, 500);
    withdraw_all_trust_accounts(trust_account_vec, 5000);
    withdraw_all_trust_accounts(trust_account_vec, 400);
    withdraw_all_trust_accounts(trust_account_vec, 400);
    display_trust_accounts(trust_account_vec);
}
