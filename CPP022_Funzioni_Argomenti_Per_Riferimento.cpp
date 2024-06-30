/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         16.01.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

// Funzione che scambia i valori di due variabili utilizzando variabili di riferimento
void scambia(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// Funzione principale
int main(void) {
    int primoValore = 10, secondoValore = 20;

    // Scambia i valori delle due variabili
    scambia(primoValore, secondoValore);

    // Stampa i valori scambiati
    cout << "primoValore: " << primoValore << endl;
    cout << "secondoValore: " << secondoValore << endl;

    return 0;
}
