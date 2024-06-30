/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         16.01.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

/*
 * Le variabili di riferimento sono alias di un'altra variabile.
 * Devono essere inizializzate quando create.
 * Non possono cambiare le connessioni/associazioni.
 * Devono essere dello stesso tipo delle variabili associate.
 */

int main(void) {

    string nome = "Peter";
    cout << "Il valore della variabile è: " << nome << ". L'indirizzo della variabile è: " << &nome << endl;

    string &riferimento = nome; // Creazione di una variabile di riferimento
    cout << "Il valore della variabile è: " << riferimento << ". L'indirizzo della variabile è: " << &riferimento << endl;

    riferimento = "Sam";
    cout << "Il valore della variabile è: " << nome << ". L'indirizzo della variabile è: " << &nome << endl;
    cout << "Il valore della variabile è: " << riferimento << ". L'indirizzo della variabile è: " << &riferimento << endl;

    return 0;
}
