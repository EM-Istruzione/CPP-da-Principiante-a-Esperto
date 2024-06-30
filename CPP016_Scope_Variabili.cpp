/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         15.01.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

// Le variabili create fuori dalle parentesi graffe del main sono chiamate Variabili Globali.
int globalVariable;

int main(void) {

    // Le variabili dichiarate all'interno di un blocco sono chiamate Variabili Locali.
    int localVariable;

    cout << "Il valore della Variabile Globale è : " << globalVariable << endl; // Il valore predefinito è 0
    cout << "Il valore della Variabile Locale è : " << localVariable << endl;   // Il valore predefinito è un valore spazzatura

    /*
    int a = 10; // Variabile Locale

    if (a == 10)
        int result = a * 10;

    cout << result; // Errore poiché result è locale al blocco if
    */

    /*
        Il ragionamento vale anche per i blocchi di codice dell'IF, ELSE, FOR, WHILE/DO WHILE, SWITCH, ecc.
        Per esempio

        for(int i = 0; i < 10; i++) {
            cout << i << endl;
        }
        
        cout << i + 1 << endl;

        Il FOR stampa i numeri da 0 a 9
        Il COUT successivo al FOR (ci aspettiamo stampi 10) genera un errore.
        La variabile i infatti e' stata dichiarata internamente al FOR e al suo interno questa smette di esistere

    */

   return 0;
}
