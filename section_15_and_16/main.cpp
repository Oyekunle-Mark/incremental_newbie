#include "Account_Utils.h"

int main()
{
    // savings account type
    Account *sav1 = new Savings_Account{"Savings Account 1"};
    Account *sav2 = new Savings_Account{"Savings Account 2", 500};
    Account *sav3 = new Savings_Account{"Savings Account 3", 2324, 5};
    std::vector<Account *> savings_account_vec {sav1,sav2,sav3};

    display_accounts(savings_account_vec);
    deposit_all_accounts(savings_account_vec, 500);
    display_accounts(savings_account_vec);
    withdraw_all_accounts(savings_account_vec, 600);
    display_accounts(savings_account_vec);

    // checking account type
    Account *check1 = new Checking_Account{"Checking Account 1"};
    Account *check2 = new Checking_Account{"Checking Account 2", 941};
    Account *check3 = new Checking_Account{"Checking Account 3", 12};
    std::vector<Account *> checking_account_vec {check1,check2,check3};

    display_accounts(checking_account_vec);
    deposit_all_accounts(checking_account_vec, 320);
    display_accounts(checking_account_vec);
    withdraw_all_accounts(checking_account_vec, 400);
    display_accounts(checking_account_vec);

    // trust account type
    Account *trust1 = new Trust_Account{"Trust Account 1"};
    Account *trust2 = new Trust_Account{"Trust Account 2", 1500, 7};
    Account *trust3 = new Trust_Account{"Trust Account 3", 43000, 10};
    std::vector<Account *> trust_account_vec {trust1,trust2,trust3};

    display_accounts(trust_account_vec);
    deposit_all_accounts(trust_account_vec, 6000);
    display_accounts(trust_account_vec);
    withdraw_all_accounts(trust_account_vec, 500);
    withdraw_all_accounts(trust_account_vec, 5000);
    withdraw_all_accounts(trust_account_vec, 400);
    withdraw_all_accounts(trust_account_vec, 400);
    display_accounts(trust_account_vec);

    return 0;
}
