#include <iostream>

using namespace std;

int fib_rec(int nr) {
    if(nr == 0) {
        return 0;
    }
    if(nr == 1) {
        return 1;
    }
    return fib_rec(nr-1) + fib_rec(nr-2);
}

int fib_iter(int nr) {
    int fib_2, fib_1, fib;
    fib_2 = 0;
    fib_1 = 1;
    fib = fib_2 + fib_1;
    if(nr == 0) {
        return 0;
    }
    if(nr == 1) {
        return 1;
    }

    for(int i = 2; i<nr; i++) {
        fib_2 = fib_1;
        fib_1 = fib;
        fib = fib_1 + fib_2;
    }
    return fib;
}

int main() {
    //for(int i=0; i < 5; i++)
    //{
    //    int result = fib_iter(42);
    //    cout << "fib = " << result << endl;
    //}

    int i = 0;
    while(i < 10) {
        int result = fib_iter(i);
        cout << "fib = " << result << endl;
        i += 2;
    }
    return 0;
}
