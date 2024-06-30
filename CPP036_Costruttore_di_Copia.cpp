/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         08.02.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

// Definizione della classe EsempioCostruttoreCopia
class EsempioCostruttoreCopia {
  private:
    int x, y; // Membri dati

  public:
    // Costruttore per inizializzare i membri dati
    EsempioCostruttoreCopia(int x1, int y1) {
        x = x1;
        y = y1;
    }

    // Costruttore di copia
    EsempioCostruttoreCopia(const EsempioCostruttoreCopia &esempio) {
        x = esempio.x;
        y = esempio.y;
    }

    // Metodo per visualizzare i valori
    void visualizza() {
        cout << x << " " << y << endl;
    }
};

// Funzione principale
int main(void) {
    EsempioCostruttoreCopia oggetto1(10, 15);    // Costruttore normale
    EsempioCostruttoreCopia oggetto2 = oggetto1; // Costruttore di copia
    cout << "Costruttore normale: ";
    oggetto1.visualizza();
    cout << "Costruttore di copia: ";
    oggetto2.visualizza();
}
