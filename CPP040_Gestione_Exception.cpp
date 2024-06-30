/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         03.03.2020
 * Updated:         30.06.2024
 **/

#include <iostream> // Inclusione della libreria standard per input/output.
using namespace std; // Uso dello spazio dei nomi standard per evitare di prefissare std::.

// Definizione di una classe personalizzata per gestire eccezioni di divisione per zero.
class EccezioneDivisionePerZero {
  public:
    // Metodo per stampare un messaggio di errore quando viene catturata un'eccezione di divisione per zero.
    void stampaMessaggioErrore() {
        cout << "Errore: Non dividere per zero!" << endl;
    }
};

// Funzione che esegue la divisione di due numeri e lancia un'eccezione se il divisore è zero.
double divisione(double numeratore, double denominatore) throw(EccezioneDivisionePerZero) {
    if (denominatore == 0)
        throw EccezioneDivisionePerZero(); // Lancia un'eccezione di tipo EccezioneDivisionePerZero se il denominatore è zero.
    return numeratore / denominatore; // Restituisce il risultato della divisione se il denominatore non è zero.
}

int main(void) {
    double risultato; // Variabile per memorizzare il risultato della divisione.
    try {
        risultato = divisione(13, 0); // Tenta di eseguire la divisione e può lanciare un'eccezione.
        cout << "Il risultato è = " << risultato << endl;
    }
    // Questo blocco catch gestisce solo eccezioni di tipo EccezioneDivisionePerZero.
    catch (EccezioneDivisionePerZero e) {
        e.stampaMessaggioErrore(); // Chiama il metodo per stampare il messaggio di errore.
    }
}
