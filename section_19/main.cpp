#include <iostream>
#include <iomanip>
#include <fstream>

int main()
{
    std::ifstream in_file;
    in_file.open("response.txt");

    if (!in_file)
    {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    std::cout << "File read successfully" << std::endl;

    in_file.close();

    return 0;
}
