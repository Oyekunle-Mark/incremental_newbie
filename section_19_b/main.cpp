#include <iostream>
#include <fstream>
#include <string>

int main()
{
    const std::string input_file_name{"romeo_and_juliet.txt"};
    const std::string output_file_name{"romeo_and_juliet_out.txt"};
    std::string line{};
    size_t line_number = 1;

    std::ifstream in_file{input_file_name};
    std::ofstream out_file{output_file_name};

    if (!in_file)
    {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    if (!out_file)
    {
        std::cerr << "Error creating file" << std::endl;
        return 2;
    }

    while (std::getline(in_file, line))
    {
        out_file << line_number << "\t" << line << std::endl;
        ++line_number;
    }

    in_file.close();
    out_file.close();

    return 0;
}