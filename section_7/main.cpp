#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // declare two vector of int
    vector<int> vector1{};
    vector<int> vector2{};

    // add two values to vector1 dynamically
    vector1.push_back(10);
    vector1.push_back(20);

    cout << "The elements in vector1 are: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "The size of vector1 is: " << vector1.size() << endl;

    // add two values to vector1 dynamically
    vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nThe elements in vector2 are: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "The size of vector2 is: " << vector2.size() << endl;

    // 2D vectors
    vector<vector<int>> vector2d{};
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);

    cout << "\nThe elements of vector2d are: " << endl;
    cout << vector2d.at(0).at(0) << "\t" << vector2d.at(0).at(1) << endl;
    cout << vector2d.at(1).at(0) << "\t" << vector2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << "\nThe elements of vector2d are: " << endl;
    cout << vector2d.at(0).at(0) << "\t" << vector2d.at(0).at(1) << endl;
    cout << vector2d.at(1).at(0) << "\t" << vector2d.at(1).at(1) << endl;

    cout << "\nThe elements in vector1 are: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
}
