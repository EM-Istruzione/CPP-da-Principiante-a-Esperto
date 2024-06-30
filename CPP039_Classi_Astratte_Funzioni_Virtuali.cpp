/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         09.02.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

// Classe astratta Forma
class Forma {
  protected:
    float dimensione; // Variabile protetta per memorizzare la dimensione comune (lunghezza o raggio)
  public:
    // Funzione per ottenere i dati dall'utente
    void ottieniDati() {
        cin >> dimensione;
    }

    // Funzione virtuale pura per calcolare l'area
    virtual float calcolaArea() = 0;
};

// Classe Quadrato derivata da Forma
class Quadrato : public Forma {
  public:
    // Sovrascrive la funzione virtuale pura per calcolare l'area del quadrato
    float calcolaArea() { return dimensione * dimensione; }
};

// Classe Cerchio derivata da Forma
class Cerchio : public Forma {
  public:
    // Sovrascrive la funzione virtuale pura per calcolare l'area del cerchio
    float calcolaArea() { return 3.14 * dimensione * dimensione; }
};

int main(void) {
    Quadrato quadrato;
    Cerchio cerchio;
    cout << "Inserisci la lunghezza per calcolare l'area di un quadrato: ";
    quadrato.ottieniDati();
    cout << "Area del quadrato: " << quadrato.calcolaArea();
    cout << "\nInserisci il raggio per calcolare l'area di un cerchio: ";
    cerchio.ottieniDati();
    cout << "Area del cerchio: " << cerchio.calcolaArea();
    return 0;
}
