/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         15.01.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

void welcome();            // Dichiarazione della funzione
bool isNumber(string tmp); // bool isNumber(string); Menzionare il nome della variabile durante la dichiarazione non è obbligatorio
void enterString();

// Funzioni Inline
double add(double a, double b) { return a + b; }
void changeValueTO10(int x) { x = 10; }

// int main(void) è una funzione
int main(void) {

    welcome();

    char ch;
    cout << "Vuoi terminare il programma? (S/N)" << endl;
    cin >> ch;
    if (ch == 'Y' || ch == 'y')
        return 0;

    cout << add(4.5 + 2, 4.0) << endl;

    int a = 5;
    // Una copia della variabile a viene inviata come parametro della funzione
    changeValueTO10(a);
    cout << a << endl; // Il valore di a sarà ancora 5 perché il valore originale all'indirizzo di a non è cambiato.

    enterString();
    enterString();
    enterString();

    return 0;
}

void welcome() {
    cout << "Ciao, benvenuto nella mia funzione!" << endl;
    return;
}

bool isNumber(string tmp) {
    if (tmp[0] == '0')
        return false; // Quando la funzione restituisce un valore, è la fine dell'esecuzione della funzione
    for (int i = 0; i < tmp.length(); i++) {
        if (!(tmp[i] >= 48 && tmp[i] <= 57))
            return false; // Una volta restituito false, non eseguirà più il ciclo
    }

    return true;
}

void enterString() {
    string tmp;
    cout << "Inserisci il numero: " << endl;
    cin >> tmp;

    if (isNumber(tmp))
        cout << "Numero inserito correttamente" << endl;
    else
        cout << "Numero inserito non corretto" << endl;

    return;
}
