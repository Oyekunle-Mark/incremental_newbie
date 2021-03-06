#ifndef _ACCOUNT_UTILS_H_
#define _ACCOUNT_UTILS_H_
#include <vector>
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

void display_accounts(const std::vector<Account *> &);
void deposit_all_accounts(std::vector<Account *> &, double);
void withdraw_all_accounts(std::vector<Account *> &, double);

#endif
