#include <iostream>
#include <iomanip>
#include <fstream>

void print_dashes();

int main()
{
    std::ifstream in_file;
    in_file.open("response.txt");

    if (!in_file)
    {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    print_dashes();
    std::cout << "File read successfully" << std::endl;

    in_file.close();

    return 0;
}

void print_dashes()
{
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
}