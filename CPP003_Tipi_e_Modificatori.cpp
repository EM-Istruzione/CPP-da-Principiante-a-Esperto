/**
 * Author:          ?
 * Translated by:   Elia Menoni
 * Created:         ?
 * Updated:         30.06.2024
 **/

#include <iostream>

using namespace std;

int main(void) {
    int a = 10, b = 35; // Gli int (numeri interi) occupato 4 bytes in memoria (in questo caso avendo allocato due variabili occupo in totale 8 bytes)

    cout << "Valore di a: " << a << "\tIndirizzo di a: " << &a << endl;
    cout << "Valore b: " << b << "\tIndirizzo di b: " << &b << endl;

    short s = 20; // Gli shorts (numeri piccoli) occupato 2 bytes in memoria
    cout << "Valore di s: " << s << endl;

    float f1 = 20.03;        // I float (numeri in virgola mobile) occupano 4 bytes in memoria
    double d1 = 50.55416416; // I double (numeri in virgola mobile a doppia precisione) occupano 8 bytes in memoria
    cout << "Valore di f1: " << f1 << endl;
    cout << "Valore di d1: " << d1 << endl;

    char c1 = 'A'; // I char (caratteri singoli) occupano 1 byte in memoria
    cout << c1 << endl;

    string s1 = "Hello Tridib";
    // string e' una classe e quindi non rientra tra i tipi primitivi.
    // Permette di immagazzinare e operare su stringhe di lungezza potenzialmente infinita
    cout << s1 << endl;

    string s2 = "Welcome to CPP !";
    cout << s2 << endl;

    string combineStrings = s1 + ", " + s2; // Concatenazione tra le stringhe contenute in s1, s2 e la stringa (litteral) ", "
    cout << combineStrings << endl;

    bool b1 = true;
    // I bool rappresentano i valori VERO o Falso e occupano in memoria 1 byte.
    // In vegerale tutti i numeri diversi da 0 vengono considerati True mente 0 e' considerato FALSE
    cout << b1 << endl;
    b1 = 1515;
    cout << b1 << endl;
    b1 = -445;
    cout << b1 << endl;
    b1 = 0;
    cout << b1 << endl;

    // Le varibili dichiarate antecedendo unsigned al tipo perdono la capacita' di trappresentare i numeri negativi
    // ma il range di rappresentazione e' notevolmente incrementato
    unsigned short int u1 = 60445;
    cout << u1 << endl;

    // Le variabili dichiarate antecedendo const al tipo potranno essere inizializzate in fase di dichiarazione e poi solo lette (non possono essere modificate)
    const string myname = "Tridib";
    cout << myname << endl;

    return 0;
}
