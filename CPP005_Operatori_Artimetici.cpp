#include <iostream>

using namespace std;

int main(void) {
    // ASSEGNAMENTO --> var = x
    int a = 10, b = 5;

    cout << a + b << endl; // Addizione
    cout << a - b << endl; // Sottrazione
    cout << a / b << endl; // Divisione
    cout << a * b << endl; // Moltiplicazione

    cout << a % b << endl; // Modulo a.k.a. Resto della dvisione di a per b (resto di a/b)

    cout << ++a << endl; // Pre-Incremento (prima incrementa il valore di a poi lo utilizza in eventuali espressioni)
    cout << a++ << endl; // Post-Incremento (prima utilizza il valore di a in eventuali espressioni poi lo incrementa)

    cout << --a << endl; // Pre-Decremento
    cout << a-- << endl; // Post-Descremento
}
