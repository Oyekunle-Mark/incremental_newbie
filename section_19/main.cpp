#include <iostream>
#include <iomanip>
#include <fstream>

void print_dashes();
size_t find_grade(std::string answer, std::string response);

int main()
{
    const std::string file_name{"response.txt"};
    std::string answer{};

    std::ifstream in_file;
    in_file.open(file_name);

    if (!in_file)
    {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    std::cout << std::setw(10)
              << std::left
              << "Student"
              << std::setw(10)
              << std::right
              << "Grade"
              << std::endl;
    print_dashes();

    in_file.close();

    return 0;
}

void print_dashes()
{
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
}

size_t find_grade(std::string answer, std::string response)
{
    size_t result{};

    for (size_t i{}; i < answer.length(); ++i)
    {
        if (answer.at(i) == response.at(i))
            ++result;
    }

    return result;
}
