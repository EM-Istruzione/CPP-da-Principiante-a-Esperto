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
        cout << "Tabellina del " << i << endl;
        
        // Ciclo for interno per calcolare e stampare la moltiplicazione di i per i numeri da 1 a 10
        for (int j = 1; j <= 10; j++) {
            // Questo ciclo interno si eseguirà 10 volte per ogni iterazione del ciclo esterno
            cout << i << " x " << j << " = " << (i * j) << endl;
        }
        
        cout << endl;
    }

    return 0;
}
