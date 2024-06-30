/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         27.01.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Funzione che esegue la lotteria e determina i vincitori
void lotteria(int totalePersone, int totaleVincitori) {
    if (totalePersone < totaleVincitori) {
        cout << "Estrazione non possibile" << endl;
        return;
    }

    cout << "I vincitori sono: " << endl;

    srand(time(NULL)); // Inizializza il generatore di numeri casuali

    int *vincitori = new int[totaleVincitori];

    for (int i = 0; i < totaleVincitori; i++) {
        vincitori[i] = rand() % totalePersone + 1; // Genera un numero casuale tra 1 e totalePersone

        // Controlla per evitare duplicati
        for (int j = 0; j < i + 1; j++) {
            if (vincitori[i] == vincitori[j] && i != j) {
                i--;
                break;
            } else if (j == i) {
                cout << vincitori[i] << endl; // Stampa il vincitore
            }
        }
    }

    delete[] vincitori; // Dealloca la memoria allocata dinamicamente
}

// Funzione principale
int main(void) {
    int totalePersone, totaleVincitori;

    // Chiede all'utente il numero totale di persone e il numero di premi
    cout << "Inserisci il numero totale di persone: " << endl;
    cin >> totalePersone;
    cout << "Inserisci il numero totale di premi: " << endl;
    cin >> totaleVincitori;

    // Chiama la funzione lotteria per determinare i vincitori
    lotteria(totalePersone, totaleVincitori);
    return 0;
}
