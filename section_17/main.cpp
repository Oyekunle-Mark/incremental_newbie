#include <iostream>

class Test
{
private:
    int data;

public:
    Test(int data) : data{data}
    {
        std::cout << "\tTest Constructor (" << data << ")" << std::endl;
    }
    Test() : Test(0) {}
    int get_data() const
    {
        return data;
    }
    ~Test()
    {
        std::cout << "\tTest Destructor (" << data << ")" << std::endl;
    }
};

int main()
{
}
