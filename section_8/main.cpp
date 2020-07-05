#include <iostream>

using namespace std;

int main()
{
    const int dollar_to_cent{100};
    const int quater_to_cent{25};
    const int dime_to_cent{10};
    const int nickel_to_cent{5};
    const int penny_to_cent{1};

    int amount_in_cents{};
    cout << "Enter the number of cents: ";
    cin >> amount_in_cents;

    int number_of_dollars = amount_in_cents / dollar_to_cent;
    amount_in_cents -= number_of_dollars * dollar_to_cent;

    int number_of_quarters = amount_in_cents / quater_to_cent;
    amount_in_cents -= number_of_quarters * quater_to_cent;

    int number_of_dimes = amount_in_cents / dime_to_cent;
    amount_in_cents -= number_of_dimes * dime_to_cent;

    int number_of_nickels = amount_in_cents / nickel_to_cent;
    amount_in_cents -= number_of_nickels * nickel_to_cent;

    int number_of_pennies = amount_in_cents / penny_to_cent;
    amount_in_cents -= number_of_pennies * penny_to_cent;

    cout << "You can provide the change as follows: " << endl;
    cout << "dollars: " << number_of_dollars << endl;
    cout << "quarters: " << number_of_quarters << endl;
    cout << "dimes: " << number_of_dimes << endl;
    cout << "nickels: " << number_of_nickels << endl;
    cout << "pennies: " << number_of_pennies << endl;

    return 0;
}
