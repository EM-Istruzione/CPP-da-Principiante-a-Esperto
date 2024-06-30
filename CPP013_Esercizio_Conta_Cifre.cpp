/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         14.01.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

int main(void) {
    int num, digits_count = 1;
    // Prende in input un numero dall'utente
    cin >> num;
    int temp = num;

    // Divide il numero per 10 fino a quando il quoziente è 0
    while (temp /= 10)
        // Aumenta il conteggio delle cifre di 1
        digits_count++;

    // Stampa il numero di cifre del numero inserito
    cout << "Il numero " << num << " ha " << digits_count << " cifra(e)" << endl;

    return 0;
}
