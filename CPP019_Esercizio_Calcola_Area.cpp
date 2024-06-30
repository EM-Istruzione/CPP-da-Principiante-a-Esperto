/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         15.01.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
#define PI 3.14
using namespace std;

// Inizializza e mostra il menu delle opzioni
void initMenu() {
    cout << "Seleziona una delle opzioni:" << endl;
    cout << "1. Cerchio" << endl;
    cout << "2. Quadrato" << endl;
    cout << "3. Rettangolo" << endl;
    cout << "4. Triangolo" << endl;
}

// Esegue l'azione in base alla scelta dell'utente
void menuDecision(int scelta) {
    double raggio, lato, larghezza, altezza;
    switch (scelta) {
    case 1:
        cout << "Inserisci il raggio: " << endl;
        cin >> raggio;
        areaCerchio(raggio);
        break;
    case 2:
        cout << "Inserisci il lato del quadrato: " << endl;
        cin >> lato;
        areaQuadrato(lato);
        break;
    case 3:
        cout << "Inserisci la larghezza e l'altezza del rettangolo: " << endl;
        cin >> larghezza >> altezza;
        areaRettangolo(larghezza, altezza);
        break;
    case 4:
        cout << "Inserisci la base e l'altezza del triangolo: " << endl;
        cin >> larghezza >> altezza;
        areaTriangolo(larghezza, altezza);
        break;
    default:
        cout << "Scelta errata!" << endl;
    }
    return;
}

// Calcola l'area del cerchio
double areaCerchio(double raggio) {
    double risultato = PI * raggio * raggio;
    cout << "L'area del cerchio è: " << risultato << endl;
    return risultato;
}

// Calcola l'area del quadrato
double areaQuadrato(double lato) {
    double risultato = lato * lato;
    cout << "L'area del quadrato è: " << risultato << endl;
    return risultato;
}

// Calcola l'area del rettangolo
double areaRettangolo(double larghezza, double altezza) {
    double risultato = larghezza * altezza;
    cout << "L'area del rettangolo è: " << risultato << endl;
    return risultato;
}

// Calcola l'area del triangolo
double areaTriangolo(double base, double altezza) {
    double risultato = (1 / 2.0) * base * altezza;
    cout << "L'area del triangolo è: " << risultato << endl;
    return risultato;
}

// Funzione principale
int main(void) {
    int scelta;
    char continua;

    do {
        // system("cls"); // Usato per pulire lo schermo, se necessario
        initMenu();
        cin >> scelta;

        menuDecision(scelta);

        cout << "Vuoi continuare? (S/N)" << endl;
        cin >> continua;
    } while (continua == 'Y' || continua == 'y');

    return 0;
}
