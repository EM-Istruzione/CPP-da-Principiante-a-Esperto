/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         02.02.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

// Definizione della classe StaticFunction
class StaticFunction {
  public:
    // Variabile statica condivisa tra tutte le istanze della classe
    static int variabileCondivisa;

    // Funzione membro statica accessibile senza istanze della classe
    static void mostraMessaggio() {
        cout << "Funzione membro statica" << endl;
        return;
    }
};

// Inizializzazione della variabile statica
int StaticFunction::variabileCondivisa = 50;

// Funzione demo che utilizza una variabile statica locale per tenere traccia del numero di chiamate
void demoContatore() {
    static int contatoreChiamate = 1;
    cout << "Il valore di contatoreChiamate è - " << contatoreChiamate << endl;
    contatoreChiamate++;
}

// Funzione principale che dimostra l'uso di variabili e funzioni statiche
int main(void) {
    // Chiama la funzione demoContatore 5 volte
    for (int i = 1; i <= 5; i++)
        demoContatore();

    StaticFunction::mostraMessaggio();

    // Crea un'istanza della classe e accede alla variabile statica
    StaticFunction oggetto;
    cout << "Il valore è : " << oggetto.variabileCondivisa << endl;

    return 0;
}
