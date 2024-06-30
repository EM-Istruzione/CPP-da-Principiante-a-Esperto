/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         17.01.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

// Funzione che moltiplica un valore per un dato moltiplicatore
void moltiplicaPer(int *var, int moltiplicatore) {
    *var = *var * moltiplicatore;
    
    return;
}

// Funzione che moltiplica tutti gli elementi di un array per un dato moltiplicatore
void moltiplicaArrayPer(int *array, int moltiplicatore, int dimensioneArray) {
    for (int i = 0; i < dimensioneArray; i++)
        array[i] *= moltiplicatore;

    return;
}

// Funzione principale
int main(void) {

    int valore = 10;

    // Moltiplica il valore per 5
    moltiplicaPer(&valore, 5);

    // Stampa il nuovo valore
    cout << "Valore moltiplicato: " << valore << endl;
    cout << endl;

    int array[10];

    // Inizializza l'array con valori da 0 a 9
    for (int i = 0; i < 10; i++) {
        array[i] = i;
    }

    // Moltiplica tutti gli elementi dell'array per 5
    moltiplicaArrayPer(array, 5, 10); // array = &array[0]

    // Stampa i nuovi valori dell'array
    for (int i = 0; i < 10; i++) {
        cout << "array[" << i << "] = " << array[i] << endl;
    }

    return 0;
}
