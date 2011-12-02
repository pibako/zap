#include <iostream>

using namespace std;

void swap(int *x, int *y) {
    int tmp = *y;
    *y = *x;
    *x = tmp;
}

void swap2(int &x, int &y) {
    int tmp = y;
    y = x;
    x = tmp;
}

int main()
{
    //int arr[10000000];
    int *arr2 = new int[100000000];

    int x = 1;
    int y = 2;
    cout << "x = " << x << " y = " << y << endl;
    swap(&x,&y);
    cout << "x = " << x << " y = " << y << endl;
    swap2(x,y);
    cout << "x = " << x << " y = " << y << endl;

    int *m = new int;
    int *n = new int;
    *m = 5;
    *n = 4;

    cout << "m = " << *m << " n = " << *n << endl;
    swap(m,n);
    cout << "m = " << *m << " n = " << *n << endl;
    swap2(*m,*n);
    cout << "m = " << *m << " n = " << *n << endl;



    int *a = new int;
    *a = 10;
    cout << "a = " << a << endl;
    cout << "*a = " << *a << endl;
    int b = 5;
    cout << "b = " << b << endl;
    cout << "&b = " << &b << endl;
    a = &b;
    cout << "a = " << a << endl;
    cout << "*a = " << *a << endl;
    cout << "&a = " << &a << endl;

    return 0;
}
