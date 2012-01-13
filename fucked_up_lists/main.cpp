#include <iostream>

using namespace std;

struct Telement
{
    int dane;
    Telement *next; // te nazwy nie mają znaczenia - mogą być dowolne
};

void utworz_liste_wstecz (Telement*   &glowa)
{
    Telement *aktualny;
    int liczba;
    glowa = NULL; // na początku lista jest pusta
    cout << "Wprowadz ciag liczb calkowitych zakonczony zerem \n";
    cin >> liczba; // wczytujemy 1-szą liczbę
    while (liczba!=0)   // dopóki nie wczytano zera
    {
        aktualny = new Telement; // przygotowujemy miejsce dla nowego elementu
        aktualny->dane = liczba; // wpisujemy wczytaną liczbę do pola dane
        aktualny->next = glowa; // element następny to ten, co przedtem był głowa
        glowa = aktualny; // element aktualny staje się teraz głową
        cin >> liczba; // wczytujemy kolejną liczbę
    }
}

int main()
{
    Telement* glowa;
    utworz_liste_wstecz(glowa);

    return 0;
}


