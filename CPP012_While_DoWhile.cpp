/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         14.01.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

int main(void) {
    int i = 0;
    
    // Ciclo while: stampa "Hello" 10 volte
    while (i < 10) {
        cout << "Hello" << endl;
        // Incremento all'interno del corpo del ciclo
        i++;
    }
    
    int j = 10;
    
    // Ciclo while: decrementa j e stampa il suo valore finché j non è 0
    while (j--)
        cout << j << endl;

    // Non verifica la condizione all'inizio
    // Esegue quindi le istruzioni all'interno del blocco do almeno una volta
    do {
        cout << "Hello" << endl;
        i--;
    } while (i);

    return 0;
}
