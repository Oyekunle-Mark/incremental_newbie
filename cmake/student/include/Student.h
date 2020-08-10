#include <string>

class Student
{
    private:
        std::string name;
    public:
        Student(std::string name);
        void display();
        ~Student() = default;
};
