#include <iostream>

using namespace std;

// dlaczego nie dziala?
int factorial(int nr)
{
    int result = 1;
    for(int i=0; i<nr; ++i)
    {
        result = result*i;
        //result *= 1;
    }
    return result;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
