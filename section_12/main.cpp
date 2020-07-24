#include <iostream>

using namespace std;

void print_array(const int *const arr, size_t size);
int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2);

int main()
{
    int arr1[] {1, 2, 3, 4, 5};
    int arr2[] {1, 2, 3};

    cout << "Array 1: ";
    print_array(arr1, 5);

    cout << "Array 2: ";
    print_array(arr2, 3);

    int *result = apply_all(arr1, 5, arr2, 3);

    cout << "Result: ";
    print_array(result, 15);

    delete [] result;
}

void print_array(const int *const arr, size_t size)
{
    for (size_t i{}; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2)
{
}