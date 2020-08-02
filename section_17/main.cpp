#include <iostream>
#include <memory>
#include <vector>

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

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();
void fill(std::vector<std::shared_ptr<Test>> &vec, int num);
void display(std::vector<std::shared_ptr<Test>> &vec);

int main()
{
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();

    std::cout << "How many data points do you want to write: ";
    int num{};
    std::cin >> num;

    fill(*vec_ptr, num);
    display(*vec_ptr);

    return 0;
}

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make()
{
    return std::make_unique<std::vector<std::shared_ptr<Test>>>(std::vector<std::shared_ptr<Test>>{});
}