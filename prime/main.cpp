#include <iostream>

using namespace std;

bool is_prime(int n) {
    if (n == 1) {
        return false;
    }
    for(int i=2; i < n; i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << "is prime 1: " << is_prime(1) << endl;
    cout << "is prime 2: " << is_prime(2) << endl;
    cout << "is prime 3: " << is_prime(3) << endl;
    cout << "is prime 4: " << is_prime(4) << endl;
    cout << "is prime 5: " << is_prime(5) << endl;
    return 0;
}
