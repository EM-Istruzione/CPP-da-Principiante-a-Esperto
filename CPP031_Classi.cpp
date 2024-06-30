/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         02.02.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

/**
 * Definizione della classe e sintassi:
 *
 * Una classe in C++ è un modello (o blueprint) per creare oggetti. Definisce una serie di attributi
 * (variabili membro) e metodi (funzioni membro) che rappresentano il comportamento degli oggetti creati dalla classe.
 *
 * Sintassi di base per definire una classe:
 *
 * class NomeClasse {
 *     private:
 *         // Variabili membro private
 *     public:
 *         // Costruttore
 *         NomeClasse();
 *         // Distruttore
 *         ~NomeClasse();
 *         // Metodi pubblici
 *         void metodo();
 * };
 */

class I_Miei_Dettagli {
  private:
    short eta; // Variabile membro privata per memorizzare l'età
    int *p;    // Puntatore a un array di interi

  public:
    // Costruttore
    I_Miei_Dettagli() {
        static int i = 0;
        cout << "Questo costruttore è stato invocato " << ++i << " volte" << endl;
        eta = 50;
        p = new int[10]; // Allocazione dinamica della memoria per un array di 10 interi
    }

    // Distruttore
    ~I_Miei_Dettagli() {
        static int j = 0;
        cout << "Questo distruttore è stato invocato " << ++j << " volte" << endl;
        delete[] p; // Deallocazione della memoria allocata dinamicamente
    }

    // Metodo per impostare l'età
    void impostaEta(int valore) {
        if (valore < 0)
            eta = 0; // Imposta l'età a 0 se il valore è negativo
        else
            eta = valore; // Imposta l'età al valore specificato
    }

    // Metodo per ottenere l'età
    short ottieniEta() {
        return eta;
    }
};

// Funzione principale
int main(void) {
    I_Miei_Dettagli persona1; // Creazione di un oggetto di tipo I_Miei_Dettagli
    I_Miei_Dettagli persona2; // Creazione di un secondo oggetto di tipo I_Miei_Dettagli

    persona1.impostaEta(-55); // Impostazione dell'età a -55 (verrà corretta a 0)
    persona2.impostaEta(20);  // Impostazione dell'età a 20

    // Stampa dell'età delle persone
    cout << "Età di persona1: " << persona1.ottieniEta() << endl;
    cout << "Età di persona2: " << persona2.ottieniEta() << endl;

    return 0;
}

/**
 * Il costruttore:
 * Il costruttore è un metodo speciale che viene chiamato automaticamente quando un oggetto della classe viene creato.
 * In questo esempio, il costruttore I_Miei_Dettagli:
 * - Incrementa e stampa un contatore statico che tiene traccia del numero di volte che il costruttore è stato invocato.
 * - Imposta l'età a un valore predefinito di 50.
 * - Alloca dinamicamente memoria per un array di 10 interi utilizzando l'operatore new.
 *
 * Il distruttore:
 * Il distruttore è un metodo speciale che viene chiamato automaticamente quando un oggetto della classe viene distrutto.
 * In questo esempio, il distruttore ~I_Miei_Dettagli:
 * - Incrementa e stampa un contatore statico che tiene traccia del numero di volte che il distruttore è stato invocato.
 * - Dealloca la memoria precedentemente allocata per l'array di interi utilizzando l'operatore delete[].
 */
