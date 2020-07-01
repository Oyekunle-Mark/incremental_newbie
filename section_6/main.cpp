#include <iostream>
// #include <climits>

using namespace std;

double calculate_cost(short room_number, double price_per_room)
{
    return room_number * price_per_room;
}

int main()
{
    // cout << "sizeof information" << endl;
    // cout << "===================================================" << endl;

    // cout << "char: " << sizeof(char) << " bytes" << endl;
    // cout << "int: " << sizeof(int) << " bytes" << endl;
    // cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    // cout << "short: " << sizeof(short) << " bytes" << endl;
    // cout << "long: " << sizeof(long) << " bytes" << endl;
    // cout << "long long: " << sizeof(long long) << " bytes" << endl;

    // cout << "===================================================" << endl;

    // cout << "float: " << sizeof(float) << " bytes" << endl;
    // cout << "double: " << sizeof(double) << " bytes" << endl;
    // cout << "long double: " << sizeof(long double) << " bytes" << endl;

    const double price_per_small_room{25.0};
    const double price_per_large_room{35.0};
    const double tax{0.06};
    const short estimate_validity{30}; // in days

    cout << "Hello welcome to the Chief Cleaning Service" << endl;
    cout << "\nNumber of small rooms: ";
    short number_small_rooms{0};
    cin >> number_small_rooms;

    cout << "Number of large rooms: ";
    short number_large_rooms{0};
    cin >> number_large_rooms;

    cout << "===================================================" << endl;

    cout << "Estimates for cleaning service\n"
         << endl;
    cout << "Number of small rooms: " << number_small_rooms << endl;
    cout << "Number of large rooms: " << number_large_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;

    cout << "===================================================" << endl;

    double cost = calculate_cost(number_small_rooms, price_per_small_room) + calculate_cost(number_large_rooms, price_per_large_room);
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << tax * cost << endl;

    cout << "===================================================" << endl;

    cout << "Total estimate: $" << cost + (tax * cost) << endl;
    cout << "Estimate valid for " << estimate_validity << " days." << endl;

    cout << endl;

    return 0;
}
