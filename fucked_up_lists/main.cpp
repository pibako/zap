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

void utworz_liste_wstecz_2 (Telement** glowa)
{
    Telement *aktualny;
    int liczba;
    *glowa = NULL; // na początku lista jest pusta
    cout << "Wprowadz ciag liczb calkowitych zakonczony zerem \n";
    cin >> liczba; // wczytujemy 1-szą liczbę
    while (liczba!=0)   // dopóki nie wczytano zera
    {
        aktualny = new Telement; // przygotowujemy miejsce dla nowego elementu
        aktualny->dane = liczba; // wpisujemy wczytaną liczbę do pola dane
        aktualny->next = *glowa; // element następny to ten, co przedtem był głowa
        *glowa = aktualny; // element aktualny staje się teraz głową
        cin >> liczba; // wczytujemy kolejną liczbę
    }
}

void print_list(Telement* head) {
    if (head != NULL) {
        while (head != NULL) {
            cout << head->dane << " ";
            head = head->next;
        }
    }
}

int main()
{
    Telement* glowa;
    utworz_liste_wstecz_2(&glowa);
    print_list(glowa);

    return 0;
}


