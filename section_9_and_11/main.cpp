#include <iostream>
#include <vector>

using namespace std;

void print_menu();
void read_input(char &receiver);
void print_integers(vector<int> &vec);
void add_integers(vector<int> &vec);
void find_mean(vector<int> &vec);
void find_min(vector<int> &vec);
void find_max(vector<int> &vec);

int main()
{
    bool should_loop{true};
    char input{};
    vector<int> vec{};

    while (should_loop)
    {
        print_menu();
        read_input(input);

        switch (input)
        {
        case 'P':
            print_integers(vec);
            break;
        case 'A':
            add_integers(vec);
            break;
        case 'M':
            find_mean(vec);
            break;
        case 'S':
            find_min(vec);
            break;
        case 'L':
            find_max(vec);
            break;
        case 'Q':
            cout << "Goodbye!" << endl
                 << endl;
            should_loop = false;
            break;
        default:
            cout << "Invalid entry." << endl;
        }
    }

    return 0;
}

void print_menu()
{
    cout << "\nP - Print numbers"
         << endl
         << "A - Add a number"
         << endl
         << "M - Display mean of the numbers"
         << endl
         << "S - Display the smallest numbers"
         << endl
         << "L - Display the largest numbers"
         << endl
         << "Q - Quit :("
         << endl
         << endl;
}

void read_input(char &receiver)
{
    char new_input{};

    cout << "Enter your choice: ";
    cin >> new_input;

    receiver = toupper(new_input);
}

void print_integers(vector<int> &vec)
{
    if (vec.size())
    {
        cout << "[ ";

        for (auto item : vec)
            cout << item << " ";

        cout << "]" << endl;
    }
    else
    {
        cout << "[]" << endl;
    }
}

void add_integers(vector<int> &vec)
{
    int new_item{};
    cout << "Enter an integer to add to the list: ";
    cin >> new_item;
    vec.push_back(new_item);
    cout << new_item << " added." << endl;
}

void find_mean(vector<int> &vec)
{
    if (vec.size())
    {
        double total{};

        for (auto item : vec)
            total += item;

        cout << "The mean is: " << (total / vec.size()) << endl;
    }
    else
    {
        cout << "Unable to calculate mean - no data." << endl;
    }
}

void find_min(vector<int> &vec)
{
    if (vec.size())
    {
        int smallest{vec.at(0)};

        for (auto item : vec)
            smallest = item < smallest ? item : smallest;

        cout << "The smallest number is: " << smallest << endl;
    }
    else
    {
        cout << "Unable to determine the smallest number - list is empty" << endl;
    }
}

void find_max(vector<int> &vec)
{
    if (vec.size())
    {
        int largest{vec.at(0)};

        for (auto item : vec)
            largest = item > largest ? item : largest;

        cout << "The largest number is: " << largest << endl;
    }
    else
    {
        cout << "Unable to determine the largest number - list is empty" << endl;
    }
}