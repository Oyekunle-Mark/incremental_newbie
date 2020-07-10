#include <iostream>
#include <vector>

using namespace std;

int main()
{
    bool should_loop{true};
    char input{};
    vector<int> vec{};

    while (should_loop)
    {
        cout << "Enter your choice: ";
        cin >> input;

        switch (input)
        {
        case 'P':
        case 'p':
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
            break;
        case 'A':
        case 'a':
        {
            int new_item{};
            cout << "Enter an integer to add: ";
            cin >> new_item;
            vec.push_back(new_item);
            cout << new_item << " added." << endl;
            break;
        }
        case 'M':
        case 'm':
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
            break;
        }
        case 'S':
        case 's':
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
            break;
        }
        case 'L':
        case 'l':
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
            break;
        }
        case 'Q':
        case 'q':
            cout << "Goodbye!" << endl;
            should_loop = false;
            break;
        default:
            cout << "Invalid entry." << endl;
        }
    }

    return 0;
}
