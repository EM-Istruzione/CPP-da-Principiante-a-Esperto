/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         17.01.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

// Funzione principale
int main(void) {

    string testo = "Ciao"; // C i a o \0

    char carattere = testo[0];

    char caratteri[] = "Ciao Mondo";

    cout << caratteri << endl; // Stampa la stringa intera

    cout << caratteri[0] << endl;     // Stampa il primo carattere
    cout << *(caratteri) << endl;     // Stampa il primo carattere usando dereferenziazione
    cout << caratteri[1] << endl;     // Stampa il secondo carattere
    cout << *(caratteri + 1) << endl; // Stampa il secondo carattere usando dereferenziazione

    cout << endl
         << endl;

    char *puntatore = caratteri;

    cout << puntatore[0] << endl; // Stampa il primo carattere usando il puntatore
    cout << *puntatore << endl;   // Stampa il primo carattere usando dereferenziazione del puntatore

    cout << puntatore[1] << endl;     // Stampa il secondo carattere usando il puntatore
    cout << *(puntatore + 1) << endl; // Stampa il secondo carattere usando dereferenziazione del puntatore

    cout << endl
         << endl;

    string testo1 = "Ehi";

    const char *testo2 = testo1.c_str();
    cout << testo2 << endl; // Stampa la conversione del stringa a const char*

    char array[] = "Testo di esempio";
    string prova = array;
    cout << prova << endl; // Stampa la conversione dell'array di char a stringa

    const char *a = "Test";
    cout << a << endl; // Stampa la stringa costante

    char *const array_dinamico = new char[50];
    array_dinamico[0] = 'k';
    array_dinamico[1] = '\0';
    cout << array_dinamico << endl; // Stampa il contenuto dell'array dinamico
    delete[] array_dinamico;        // Dealloca la memoria allocata dinamicamente

    cout << endl
         << endl;

    string array_di_stringhe[5] = "qwerty"; // Inizializza il primo elemento a "qwerty"

    array_di_stringhe[0] = "abc";
    array_di_stringhe[1] = "def";

    cout << array_di_stringhe[0] << endl; // Stampa il primo elemento
    cout << array_di_stringhe[1] << endl; // Stampa il secondo elemento
    cout << array_di_stringhe[2] << endl; // Stampa il terzo elemento (vuoto)
    //...

    return 0;
}
