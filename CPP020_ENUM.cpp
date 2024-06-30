/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         16.01.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

// Definizione di un enumeratore per i giorni della settimana
enum GiornoDellaSettimana { Lunedi = 1,
                            Martedi,
                            Mercoledi,
                            Giovedi,
                            Venerdi,
                            Sabato,
                            Domenica };

// Implementazione della funzione che restituisce il nome del giorno della settimana
string getGiorno(GiornoDellaSettimana giorno) {
    switch (giorno) {
    case Lunedi:
        return "Ehi! Hai selezionato Lunedi";
    case Martedi:
        return "Ehi! Hai selezionato Martedi";
    case Mercoledi:
        return "Ehi! Hai selezionato Mercoledi";
    case Giovedi:
        return "Ehi! Hai selezionato Giovedi";
    case Venerdi:
        return "Ehi! Hai selezionato Venerdi";
    case Sabato:
        return "Ehi! Hai selezionato Sabato";
    case Domenica:
        return "Ehi! Hai selezionato Domenica";
    default:
        return "Ehi! Input errato!";
    }

    return;
}

// Funzione principale
int main(void) {
    cout << "Inserisci un giorno della settimana (1-7):" << endl;
    int inputGiorno;
    cin >> inputGiorno;
    cout << getGiorno(GiornoDellaSettimana(inputGiorno)) << endl;

    return 0;
}
