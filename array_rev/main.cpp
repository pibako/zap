#include <iostream>

using namespace std;

void print_array(char array[], int size) {
    for (int i=0; i<size; i++) {
        cout << array[i] << endl;
    }
}

void fill_with_string(char array[], int size, string text) {
    for (int i=0; i<size; i++) {
        array[i] = text[i%text.length()];
    }
}

int main()
{
    int const SIZE = 100;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    char letters[SIZE];

    fill_with_string(letters, SIZE, alphabet);
    print_array(letters, SIZE);

    char letters2[10];
    string text = "dom";
    fill_with_string(letters2, 10, text);
    print_array(letters2, 10);

    return 0;
}
