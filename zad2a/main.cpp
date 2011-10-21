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

int main()
{
    for(int i=0; i < 10; i++) {
        int result = fib_rec(i);
        cout << "fib = " << result << endl;
    }
    return 0;
}
