#ifndef _ACCOUNT_UTILS_H_
#define _ACCOUNT_UTILS_H_
#include <vector>
#include "Savings_Account.h"
#include "Checking_Account.h"

void display_accounts(const std::vector<Account> &);
void deposit_all_accounts(std::vector<Account> &, double);
void withdraw_all_accounts(std::vector<Account> &, double);

void display_savings_accounts(const std::vector<Savings_Account> &);
void deposit_all_savings_accounts(std::vector<Savings_Account> &, double);
void withdraw_all_savings_accounts(std::vector<Savings_Account> &, double);

void display_checking_accounts(const std::vector<Checking_Account> &);
void deposit_all_checking_accounts(std::vector<Checking_Account> &, double);
void withdraw_all_checking_accounts(std::vector<Checking_Account> &, double);

#endif
