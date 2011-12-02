#include <iostream>

using namespace std;

struct Point {
    double *x;
    double *y;
};

void swap(int *x, int *y) {
    int tmp = *y;
    *y = *x;
    *x = tmp;
}

int main()
{
    Point p;
    p.x = new double;
    p.y = new double;

    *(p.x) = 40;
    *(p.y) = 50;

    swap(p.x, p.y);

    cout << *(p.x) << "  " << *(p.y) << endl;

    Point *p_p = new Point;
    (*p_p).x = new double;
    //p_p->x = new double;

    int arr[10];
    int *arr2 = new int[10];

    for(int i = 0; i < 10; i++) {
        arr[i] = i;
    }
    for(int i = 0; i < 10; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    for(int i = 0; i < 10; i++) {
        cout << "arr[" << i << "] = " << *arr + i << endl;
    }


    return 0;
}
