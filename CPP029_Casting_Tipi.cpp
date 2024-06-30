/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         27.01.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

// Funzione principale
int main(void) {

    double valore = 5.5;

    // Stampa il valore originale
    cout << "Valore originale: " << valore << endl;

    // Casting esplicito da double a int
    cout << "Valore castato esplicitamente a int: " << (int)valore << endl;

    int a = 5, b = 7;

    // Divisione intera
    cout << "Divisione intera: " << a / b << endl;

    // Casting esplicito da int a double per divisione corretta
    cout << "Divisione con casting esplicito: " << (double)a / b << endl;

    int x = 444;

    // Casting implicito da int a short
    short y = x;
    cout << "Valore di x castato implicitamente a short: " << y << endl;

    // Casting esplicito usando static_cast in C++
    cout << "Valore castato usando static_cast<int>: " << static_cast<int>(valore) << endl;

    char carattere = 't';

    // Controlla il valore ASCII di un carattere usando casting esplicito
    cout << "Valore ASCII di 't' usando casting esplicito: " << (int)carattere << endl;

    // Controlla il valore ASCII di un carattere usando static_cast
    cout << "Valore ASCII di 't' usando static_cast<int>: " << static_cast<int>(carattere) << endl;

    return 0;
}
