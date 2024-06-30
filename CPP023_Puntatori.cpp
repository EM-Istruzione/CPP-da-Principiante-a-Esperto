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

    int variabile = 5;
    cout << "Indirizzo di variabile: " << &variabile << endl; // Stampa l'indirizzo
    cout << "Valore di variabile: " << *&variabile << endl;   // Stampa il valore

    int *puntatore; // Dichiarazione di una variabile puntatore che punta all'indirizzo di un'altra variabile
    puntatore = &variabile;

    cout << "Indirizzo di variabile attraverso puntatore: " << puntatore << endl; // Stampa l'indirizzo di variabile
    cout << "Valore di variabile attraverso puntatore: " << *puntatore << endl;   // Stampa il valore memorizzato all'indirizzo indicato

    int num = 20;
    cout << "num: " << num << endl;
    int *puntatore_num = &num;
    *puntatore_num = 60;
    cout << "num dopo l'assegnazione tramite puntatore: " << num << endl;
    cout << "*puntatore_num: " << *puntatore_num << endl;

    int *const puntatore_const = &num;                       // Non può cambiare l'INDIRIZZO successivamente
    const int *puntatore_val_const = &num;                   // Non può cambiare il VALORE
    const int *const puntatore_val_e_indirizzo_const = &num; // Non può cambiare né il VALORE né l'INDIRIZZO

    int mia_var = 10;
    int *mia_p = &mia_var;

    cout << endl
         << endl;
    cout << "mia_var: " << mia_var << endl; // Valore intero
    cout << "mia_p: " << mia_p << endl;     // Indirizzo
    cout << "*mia_p: " << *mia_p << endl;   // Valore intero dalla variabile puntata (mia_var)
    cout << "&mia_p: " << &mia_p << endl;   // Indirizzo del puntatore stesso

    int **puntatore_doppio = &mia_p; // Puntatore che punta all'indirizzo di un altro puntatore
    cout << "puntatore_doppio: " << puntatore_doppio << endl;
    cout << "&puntatore_doppio: " << &puntatore_doppio << endl;
    cout << "*puntatore_doppio: " << *puntatore_doppio << endl;
    cout << "**puntatore_doppio: " << **puntatore_doppio << endl;

    return 0;
}
