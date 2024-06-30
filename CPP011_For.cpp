/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         18.11.2019
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

int main(void) {
    /*
        for(inizializzazione; condizione; incremento/decremento)
            istruzioni_da_ripetere;
    */

    // Questo ciclo for stampa "Hello" tre volte
    for (int i = 0; i < 3; i++)
        cout << "Hello" << endl;

    int array[4];

    // Questo ciclo for inizializza gli elementi dell'array con i valori 0, 1, 2, 3
    for (int i = 0; i < 4; i++)
        array[i] = i; // Inizializzazione

    // Questo ciclo for stampa gli elementi dell'array
    for (int i = 0; i < 4; i++)
        cout << array[i] << endl; // Stampa degli elementi dell'array

    // Ciclo infinito (commentato)
    /*
        for(;;)
            cout << "Stop me if you can !" << endl;
    */

   /*
        Quando il blocco di codice che il for deve ripetere e' piu' lungo di una istruzione
        viene racchiuso tra parentesi graffe

        for(inizializzazione; condizione; incremento/decremento) {
            istruzioni_da_ripetere;
            istruzioni_da_ripetere;
        }
   */

    return 0;
}
