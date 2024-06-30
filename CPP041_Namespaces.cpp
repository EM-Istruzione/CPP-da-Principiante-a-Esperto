/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         03.03.2020
 * Updated:         30.06.2024
 **/

#include <iostream>  // Inclusione della libreria standard per input/output.
using namespace std; // Uso dello spazio dei nomi standard per evitare di prefissare std::.

// Definizione dello spazio dei nomi A.
namespace A {
    int valoreInA = 20; // Variabile 'valoreInA' nello spazio dei nomi A.
}

// Definizione dello spazio dei nomi B.
namespace B {
    int valoreInB = 40; // Variabile 'valoreInB' nello spazio dei nomi B.
}

int main(void) {
    int valoreLocale = 50; // Variabile locale 'valoreLocale'.
    // Accesso alla variabile locale.
    cout << "Valore locale: " << valoreLocale << endl;
    // Accesso alla variabile 'valoreInA' nello spazio dei nomi A.
    cout << "Valore in A: " << A::valoreInA << endl;
    // Accesso alla variabile 'valoreInB' nello spazio dei nomi B.
    cout << "Valore in B: " << B::valoreInB << endl;
    return 0;
}
