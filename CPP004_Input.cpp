/**
 * Author:          ?
 * Translated by:   Elia Menoni
 * Created:         ?
 * Updated:         30.06.2024
 **/

#include <iostream>

using namespace std;

int main(void) {
    // CIN - Input da Tastiera (terminale o console)
    int a;
    cin >> a;
    cout << "Valore di a dopo la lettura: " << a << endl;

    string nome, cognome;

    cout << "Inserisci il tuo nome: ";
    cin >> nome;

    cout << "Inserisci il tuo cognome: ";
    cin >> cognome;

    cout << "Ciao " << nome << " " << cognome << endl;

    /*
        Il CIN identifica autonomamente il tipo di valore da leggere in base alla variabile in cui vogliamo salvarlo
    */

   return 0;
}
