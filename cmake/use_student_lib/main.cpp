#include "Student.h"

int main(int argc, char *argv[])
{
    Student *student = new Student("Bidden");
    student->display();
    delete student;

    return 0;
}
