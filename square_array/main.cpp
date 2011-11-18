#include <iostream>
#include <cstdlib>

using namespace std;

/**
* Funkcja losujaca wartosc 0 lub 1 z okreslonym prawdopodobienstwem.
* @param double - wartość prawdopodobienstwa z przedzialu <0,1>
* @return int wartosc 0 lub 1 w zaleznosci od prawdopodobienstwa.
*/
int rand_with_probability(double probability) {
    if (rand() < probability*RAND_MAX ) {
        return 1;
    }
    return 0;
}

void print_array(double arr[], int size) {
    for (int i=0; i < size; i++) {
        cout << arr[i] << endl;
    }
}

int main()
{
    int const WIDTH = 10000;
    int const HEIGHT = 10;
    int array[WIDTH][HEIGHT];
    // konieczna inicjalizacja generatora
    srand(time(0));

    for (int i=0; i < HEIGHT-1; i++) {
        for (int j=0; j < WIDTH; j++) {
            double temp_probability = 0.9 - 0.1*i;
            array[j][i] = rand_with_probability(temp_probability);
        }
    }

    for (int j=0; j < WIDTH; j++) {
        array[j][HEIGHT-1] = rand_with_probability(0.01);
    }

    double test_prob[HEIGHT];
    for (int i=0; i < HEIGHT; i++) {
        test_prob[i] = 0;
        for (int j=0; j < WIDTH; j++) {
            test_prob[i] += array[j][i];
        }
        test_prob[i] = test_prob[i] / WIDTH;
    }

    print_array(test_prob, HEIGHT);


    return 0;
}
