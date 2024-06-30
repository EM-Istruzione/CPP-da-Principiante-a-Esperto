/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         16.01.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

// Funzione principale
int main(void) {

    int array[3] = {10, 20, 30};
    int * const puntatore = &array[0]; // Puntatore costante all'indirizzo del primo elemento dell'array
                                       // Piu banalmente puntatore = array

    // Stampa l'indirizzo base dell'array
    cout << "Indirizzo base dell'array (puntatore): " << puntatore << endl;
    cout << "Indirizzo base dell'array: " << array << endl; // Indirizzo base - array[0]

    cout << endl << endl;

    // Stampa gli indirizzi dei singoli elementi dell'array
    cout << "Indirizzo di array[0]: " << &array[0] << endl;
    cout << "Indirizzo di array[1]: " << &array[1] << endl;
    cout << "Indirizzo di array[2]: " << &array[2] << endl;

    cout << endl << endl;

    // Stampa l'indirizzo base dell'array e gli indirizzi calcolati spostandosi di una posizione alla volta
    cout << "Indirizzo base dell'array: " << array << endl;
    cout << "Indirizzo base + 1: " << array + 1 << endl; // Si sposta di una posizione delle dimensioni del tipo di elemento dell'array
    cout << "Indirizzo base + 2: " << array + 2 << endl;

    cout << endl << endl;

    // Stampa i valori degli elementi dell'array utilizzando la notazione con il puntatore
    cout << "Valore di array[0]: " << *array << endl;
    cout << "Valore di array[1]: " << *(array + 1) << endl;
    cout << "Valore di array[2]: " << *(array + 2) << endl;

    return 0;
}
