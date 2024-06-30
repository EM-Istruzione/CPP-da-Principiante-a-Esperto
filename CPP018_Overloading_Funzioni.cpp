/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         15.01.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

// Dichiarazione delle funzioni sovraccaricate
int calcolaPotenza(int base, int esponente);
double calcolaPotenza(double base, int esponente);

// Durante il sovraccarico delle funzioni, il nome della funzione sarà lo stesso.
// Il tipo di ritorno della funzione e/o i parametri della funzione saranno diversi.

int main(void) {
    // Chiamata alla funzione `calcolaPotenza` con parametri di tipo diverso
    cout << calcolaPotenza(2.8, 3) << endl; // Chiamata alla versione double
    cout << calcolaPotenza(2, 3) << endl;   // Chiamata alla versione int
    return 0;
}

// Definizione della funzione `calcolaPotenza` per tipo `int`
int calcolaPotenza(int base, int esponente) {
    int risultato = base;
    while (esponente > 1) {
        base = base * risultato;
        esponente--;
    }
    return base;
}

// Definizione della funzione `calcolaPotenza` per tipo `double`
double calcolaPotenza(double base, int esponente) {
    double risultato = base;
    while (esponente > 1) {
        base = base * risultato;
        esponente--;
    }
    return base;
}

/**
 * Sovraccarico di Funzione:
 *
 * Il sovraccarico di funzione è una caratteristica di C++ che permette di definire
 * più funzioni con lo stesso nome ma con parametri diversi (sia in numero che in tipo).
 * Il compilatore distingue quale funzione chiamare in base al numero e al tipo di
 * argomenti passati.
 *
 * Vantaggi del Sovraccarico di Funzione:
 * - Migliora la leggibilità del codice, permettendo di utilizzare lo stesso nome per
 *   funzioni logicamente simili.
 * - Riduce la necessità di scegliere nomi di funzioni unici.
 *
 * Esempio:
 * In questo programma, la funzione `calcolaPotenza` è sovraccaricata per gestire sia
 * valori interi che valori double come base per il calcolo della potenza.
 **/
