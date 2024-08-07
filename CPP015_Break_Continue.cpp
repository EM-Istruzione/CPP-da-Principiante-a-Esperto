/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         14.01.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

int main(void) {
    // Ciclo for esterno per iterare sui numeri da 1 a 10
    for (int i = 1; i <= 10; i++) {
        if (i == 3)
            continue; // Tutto ciò che segue la continue NON verrà eseguito.
                      // Il ciclo però non si interrompe, salta le istruzioni dell'iterazione corrente e continua con la prossima.

        if (i == 5)
            break; // Tutto ciò che segue la break NON verrà eseguito e il controllo esce dal ciclo.
                   // Il ciclo si interrompe quando si incontra l'istruzione break.

        cout << "Tabellina del " << i << endl;

        // Ciclo for interno per calcolare e stampare la moltiplicazione di i per i numeri da 1 a 10
        for (int j = 1; j <= 10; j++) {
            if (j == 5)
                break; // Non stampa dopo le prime 4 righe per ciascuna tabellina
            cout << i << " x " << j << " = " << (i * j) << endl;
        }

        cout << endl;
    }

    return 0;
}
