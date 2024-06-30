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

    int quantita;
    cout << "Quanti numeri vorresti memorizzare nell'array? " << endl;
    cin >> quantita;

    // Allocazione dinamica della memoria per un array di interi
    int *puntatore = new int[quantita];

    // Verifica se l'allocazione della memoria è andata a buon fine
    if (puntatore != NULL) {
        // Inserimento dei valori nell'array
        for (int i = 0; i < quantita; i++) {
            cout << "Inserisci il numero " << (i + 1) << ": " << endl;
            cin >> puntatore[i];
        }

        cout << endl
             << endl;

        // Stampa dei valori memorizzati nell'array
        for (int i = 0; i < quantita; i++) {
            cout << "puntatore[" << i << "] = " << puntatore[i] << endl;
        }

        // Libera la memoria allocata
        delete[] puntatore;
    } else {
        // Messaggio di errore in caso di memoria insufficiente
        cout << "Memoria insufficiente!" << endl;
    }

    return 0;
}
