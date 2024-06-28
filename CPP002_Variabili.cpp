#include <iostream>

using namespace std;

int main(void) {
    // Diachiaro una variabile var_intera di tipo intero, vengono allocati 4 bytes di memora.
    int var_intera = 4;

    // Stampo il valore di var_intera
    cout << var_intera << endl;
    // Stampo l'indirizzo (di memoria) di var_intera
    cout << &var_intera << endl;

    /*
        1. Le variabili non possono avere lo stesso nome (internamento allo stesso scope)
        2. I nomi delle variabili non possono cominciare con un numero
        3. I nome delle variabili non dovrebbero avere spazi (utilizzare il formato di prefernza. Es: nome_molto_lungo oppure nomeMoltoLungo)
        4. I nomi delle variabili dovrebbero essere auto esplicativi (Base, var_interaltezza, Esponente -- Non a, b, c)
        5. I nomi delle variabili non possono contenere caratteri speciali (?>()$&) ne keyword (if, else, for, int, ...)
    */

    // Re-inizializzazione della variabile var_intera
    var_intera = 10;
    cout << var_intera << endl;
    cout << &var_intera;

    return 0;
}
