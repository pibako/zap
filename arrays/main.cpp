#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    for(int i=0; i < 10; i++ ) {
        cout << 20*(rand()/double(RAND_MAX)) - 10 << endl;
    }

    int array[10];

    array[0] = 1;
    cout << array[0];

/*    for (int i=0; i<5; i++) {
        cout << i << ": " << rand() << endl;
    }

    cout << "MAX_RAND = " << RAND_MAX << endl;

    double array[200];
    for(int i=0; i<200; i++) {
        array[i] = 10.05;
    }
    for(int i=0; i<200; i++) {
        cout << array[i] << endl;
    }
*/

    return 0;
}
