/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         02.02.2020
 * Updated:         30.06.2024
 **/

#include <iostream>  // Inclusione della libreria standard per input/output.
using namespace std; // Uso dello spazio dei nomi standard per evitare di prefissare std::.

class Contenitore { // Rinominato da "Scatola" a "Contenitore" per chiarezza.
  private:
    int altezza; // Variabile membro privata per memorizzare l'altezza del contenitore.
  public:
    // Costruttore di default che inizializza altezza a 0.
    Contenitore() : altezza(0) {}
    // Dichiarazione di funzione amica. Questa funzione può accedere ai membri privati della classe.
    friend int modificaEStampaAltezza(Contenitore);
};

// Definizione della funzione amica. Può accedere ai membri privati di Contenitore.
int modificaEStampaAltezza(Contenitore c) {
    c.altezza += 10;  // Modifica l'altezza del contenitore aggiungendo 10.
    return c.altezza; // Ritorna la nuova altezza del contenitore.
}

int main(void) {   // Punto di ingresso del programma.
    Contenitore c; // Crea un'istanza di Contenitore.
    // Stampa l'altezza del contenitore dopo averla modificata tramite la funzione amica.
    cout << "Altezza del contenitore: " << modificaEStampaAltezza(c) << endl;
    return 0; // Termina il programma con stato 0.
}
