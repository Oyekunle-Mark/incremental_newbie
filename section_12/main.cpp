#include <iostream>

using namespace std;

void print_array(const int *const arr, size_t size);
int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2);

int main()
{
    int arr1[]{1, 2, 3, 4, 5};
    int arr2[]{10, 20, 30};

    cout << "Array 1: ";
    print_array(arr1, 5);

    cout << "Array 2: ";
    print_array(arr2, 3);

    int *result = apply_all(arr1, 5, arr2, 3);

    cout << "Result: ";
    print_array(result, 15);

    delete[] result;
    return 0;
}

void print_array(const int *const arr, size_t size)
{
    cout << "[ ";

    for (size_t i{}; i < size; ++i)
        cout << arr[i] << " ";

    cout << "]"
         << endl;
}

int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2)
{
    int *result{nullptr};
    result = new int[size1 * size2];
    int pos{0};

    for (size_t i{}; i < size2; ++i)
    {
        for (size_t j{}; j < size1; ++j)
        {
            result[pos] = arr2[i] * arr1[j];
            ++pos;
        }
    }

    return result;
}