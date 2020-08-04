#include <iostream>
#include <fstream>
#include <string>

int main()
{
    const std::string input_file_name{"romeo_and_juliet.txt"};
    const std::string output_file_name{"romeo_and_juliet_out.txt"};

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

    return 0;
}