#include <iostream>
#include <fstream>

using namespace std;

bool is_letter(char c) {
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        return true;
    }
    return false;
}

bool is_digit(char c) {
    if(c >= '0' && c <= '9') {
        return true;
    }
    return false;
}

bool is_operation(char c) {
    if(c == '+' || c == '-' || c == '*' || c == '/') {
        return true;
    }
    return false;
}

int main()
{
    ifstream is("./data/chars.txt");

    if (is.is_open()) {
        cout << "Plik chars.txt istnieje" << endl;
    } else {
        cout << "Plik chars.txt nie istnieje" << endl;
    }

    while(is.good()) {
        char c = char(is.get());
        if (is.good()) {
            cout << c;
        }
    }

    /*string line;
    while(is.good()) {
        getline(is, line);
        if (is.good()) {
            cout << line << endl;
        }
    }*/



    cout << "Hello world! " << is_operation('+') << endl;
    return 0;
}
