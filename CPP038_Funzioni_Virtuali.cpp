/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         09.02.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

// Classe base A
class A {
  public:
    // Funzione virtuale display nella classe base
    virtual void display() {
        cout << "La classe base è invocata" << endl;
    }
};

// Classe derivata B che eredita da A
class B : public A {
  public:
    // Sovrascrittura della funzione display nella classe derivata
    void display() {
        cout << "La classe derivata è invocata" << endl;
    }
};

int main(void) {
    A *puntatoreClasseBase;  // Puntatore alla classe base
    B oggettoClasseDerivata; // Oggetto della classe derivata
    puntatoreClasseBase = &oggettoClasseDerivata;
    puntatoreClasseBase->display(); // Si verifica il legame tardivo
}
