#include <iostream>
#include <iomanip>
#include <fstream>

void print_dashes();
size_t find_grade(std::string answer, std::string response);
template <typename T, typename U>
void print_line(T left, U right);

int main()
{
    const std::string file_name{"response.txt"};
    std::string answer{}, name{}, response{};
    size_t total_score{}, line_count{};

    std::ifstream in_file;
    in_file.open(file_name);

    if (!in_file)
    {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    in_file >> answer;

    print_line("Student", "Score");
    print_dashes();

    while (in_file >> name >> response)
    {
        size_t student_score{find_grade(answer, response)};
        ++line_count;
        total_score += student_score;

        print_line(name, student_score);
    }

    print_dashes();
    print_line("Average", static_cast<double>(total_score) / line_count);

    in_file.close();

    return 0;
}

void print_dashes()
{
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');
}

template <class T, class U>
void print_line(T left, U right)
{
    std::cout << std::endl
              << std::setw(10)
              << std::left
              << left
              << std::setw(10)
              << std::right
              << right
              << std::endl;
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
