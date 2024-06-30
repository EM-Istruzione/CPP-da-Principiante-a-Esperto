/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         02.02.2020
 * Updated:         30.06.2024
 **/

#include <iostream>  // Inclusione della libreria standard per input/output.
using namespace std; // Utilizzo dello spazio dei nomi standard per evitare di dover anteporre std::

class Dimostrazione // Rinominato da "Demo" a "Dimostrazione" per chiarezza.
{
  public:
    // Metodo non costante che stampa un messaggio.
    void mostraMessaggio() {
        cout << "Ciao Mondo dentro mostraMessaggio()" << endl;
        return;
    }
    // Metodo costante che stampa un messaggio e il valore di PI.
    // Un metodo costante non può modificare nessun membro dell'oggetto.
    void visualizza() const {
        const double PI = 3.14; // Variabile locale costante, il suo valore non può essere modificato.
        cout << "Ciao Mondo dentro visualizza()" << endl;
        cout << PI << endl; // Stampa il valore di PI.
        return;
    }
};

int main(void) {
    const Dimostrazione d1; // Crea un oggetto costante della classe Dimostrazione.
    // d1.mostraMessaggio(); // Questo causerebbe un errore se decommentato perché l'oggetto è costante.
    d1.visualizza(); // Chiamata a un metodo costante su un oggetto costante.
    return 0;        // Termina il programma con stato 0.
}