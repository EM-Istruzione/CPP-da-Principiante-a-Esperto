/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         09.02.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

// Definizione della classe per dimostrare il sovraccarico dell'operatore meno unario
class SovraccaricoMeno {
  public:
    int a, b;

    // Costruttore per inizializzare gli attributi della classe
    SovraccaricoMeno(int primo, int secondo) {
        a = primo;
        b = secondo;
    }

    // Metodo per visualizzare i valori degli attributi
    void visualizza() {
        cout << "A: " << a << " B: " << b << endl;
    }

    // Funzione per sovraccaricare l'operatore meno (-) unario
    // Cambia il segno degli attributi dell'oggetto
    SovraccaricoMeno operator-() {
        a = -a;
        b = -b;
        return SovraccaricoMeno(a, b);
    }
};

int main(void) {
    SovraccaricoMeno M1(6, 8), M2(-3, -4);
    -M1;             // Applica l'operatore meno unario all'oggetto M1
    M1.visualizza(); // Visualizza i valori di M1 dopo l'applicazione dell'operatore
    -M2;             // Applica l'operatore meno unario all'oggetto M2
    M2.visualizza(); // Visualizza i valori di M2 dopo l'applicazione dell'operatore
    return 0;
}
