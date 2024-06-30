/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         17.11.2019
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

int main(void) {
    // Dichiarazione e inizializzazione di un array bidimensionale 3x4 con tutti gli elementi a zero
    // Ovvero una matrice di 3 righe X 4 colonne
    int biArray[3][4] = {0};

    // Inizializza i singoli elementi dell'array ai rispettivi valori
    biArray[0][0] = 11;
    biArray[0][1] = 12;
    biArray[0][2] = 13;
    biArray[0][3] = 14;

    biArray[1][0] = 21;
    biArray[1][1] = 22;
    biArray[1][2] = 23;
    biArray[1][3] = 24;

    biArray[2][0] = 31;
    biArray[2][1] = 32;
    biArray[2][2] = 33;
    biArray[2][3] = 34;

    /**
     * La matrice biArray dopo gli assegnamenti è:
     * 
     *      11  12  13  14
     *      21  22  23  24
     *      31  32  33  34
     */

    // Stampa tutti gli elementi dell'array
    cout << "Gli elementi dell'array sono:" << endl;
    cout << biArray[0][0] << ", " << biArray[0][1] << ", " << biArray[0][2] << ", " << biArray[0][3] << endl;
    cout << biArray[1][0] << ", " << biArray[1][1] << ", " << biArray[1][2] << ", " << biArray[1][3] << endl;
    cout << biArray[2][0] << ", " << biArray[2][1] << ", " << biArray[2][2] << ", " << biArray[2][3] << endl;

    return 0;
}
