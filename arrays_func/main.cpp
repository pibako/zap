#include <iostream>

using namespace std;

void init_array(int array[], int size) {
    for(int i = 0; i < size; i++) {
        array[i] = 1;
    }
}

void print_array(int array[], int size) {
    for(int i = 0; i < size; i++) {
        cout << array[i] << ", ";
    }
    cout << endl;
}

void modify_var(double x) {
    x = 10;
}

int main()
{
    int const size = 10;
    int numbers[size];

    print_array(numbers, size);

    init_array(numbers, size);

    print_array(numbers, size);

    double num = 3;
    cout << num << endl;
    modify_var(num);
    cout << num << endl;

    return 0;
}
