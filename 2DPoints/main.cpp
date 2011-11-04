#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
//#define SIZE 100

using namespace std;

struct Point {
    double x, y;
    double r;
};

/**
* Funkcja zwraca wartosc losowa double z zakresu min i max;
* Funkcja przyjmuje wartosc minimalna
* @param double min
* oraz maksymalna
* @param double max
*/
double pick_random(double min, double max) {
    return (max-min) * (rand()/double(RAND_MAX)) + min;
}

int main()
{
    double const PI = 3.1415;
    int const SIZE = 100;
    Point points[SIZE];
    Point center_point;
    center_point.x = 10;
    center_point.y = 5;
    int const R_MAX = 5;
    int const ALPHA_MAX = 2*PI;

    for (int i=0; i < SIZE; i++) {
        double r = pick_random(0, R_MAX);
        double alpha = pick_random(0, ALPHA_MAX);
        points[i].x = r * cos(alpha) + center_point.x;
        points[i].y = r * sin(alpha) + center_point.y;
        points[i].r = r;
    }

    srand(time(0));

    for (int i=0; i < 100; i++) {
        cout << points[i].x << "   " << points[i].y << endl;
    }

    for(int i=0; i < SIZE; i++) {
        for (int j=0; j<SIZE; j++) {

        }
    }
    //cout << "X= " << center_point.x << " Y= " << center_point.y << endl;




    //cout << "Hello world!" << endl;
    return 0;
}
