/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         14.11.2019
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

int main(void) {
    double var1, var2;
    char decisione;
    char decisione2;

    do {
        // Chiede all'utente di inserire il primo numero
        cout << "Inserisci il primo numero: " << endl;
        cin >> var1;

        // Chiede all'utente di inserire il secondo numero
        cout << "Inserisci il secondo numero: " << endl;
        cin >> var2;

        // Chiede all'utente quale operazione vuole eseguire
        cout << "Cosa vuoi fare con questi numeri?" << endl;
        cout << "+ - addizione" << endl;
        cout << "- - sottrazione" << endl;
        cout << "* - moltiplicazione" << endl;
        cout << "/ - divisione" << endl;

        cin >> decisione;

        /**
         * Lo statement switch in C++ permette di eseguire diverse parti di codice basandosi sul valore di una variabile.
         * Sintassi di base:
         *
         * switch (espressione) {
         *     case valore1:
         *         // codice da eseguire se espressione è uguale a valore1
         *         break;
         *     case valore2:
         *         // codice da eseguire se espressione è uguale a valore2
         *         break;
         *     ...
         *     default:
         *         // codice da eseguire se nessuno dei casi precedenti è soddisfatto
         * }
         *
         * In questo programma, lo switch viene utilizzato per determinare quale operazione matematica eseguire
         * basandosi sul carattere inserito dall'utente.
         *
         * Casi d'uso:
         * - Utilizzare lo switch quando si hanno più condizioni basate sul valore di una singola variabile.
         * - Ogni caso rappresenta un possibile valore della variabile e contiene il codice da eseguire per quel valore.
         * - Il break alla fine di ogni caso è importante per evitare l'esecuzione dei casi successivi (fall-through).
         * - Il caso default viene eseguito se nessun caso corrisponde al valore della variabile.
         */

        switch (decisione) {
        case '+':
            cout << var1 << " + " << var2 << " = " << (var1 + var2) << endl;
            break;
        case '-':
            cout << var1 << " - " << var2 << " = " << (var1 - var2) << endl;
            break;
        case '*':
            cout << var1 << " * " << var2 << " = " << (var1 * var2) << endl;
            break;
        case '/':
            if (var2) // var2 != 0
                cout << var1 << " / " << var2 << " = " << (var1 / var2) << endl;
            else
                cout << "Non puoi dividere per 0" << endl;
            break;
        default:
            cout << "Hai inserito un carattere errato" << endl;
        }

        // Chiede all'utente se vuole continuare il programma
        cout << "Vuoi continuare il programma? (S/N)" << endl;
        cin >> decisione2;

    } while (decisione2 == 's' || decisione2 == 'S'); // Ripete il ciclo se l'utente vuole continuare

    return 0;
}
