#include <memory>
#include "Student.h"

int main(int argc, char *argv[])
{
    std::unique_ptr<Student> s = std::make_unique<Student>("Bidden");
    s->display();

    return 0;
}
