/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         02.02.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

// Le strutture in C++ sono utilizzate per raggruppare variabili di tipi differenti sotto un unico nome.
// Possono essere considerate come un modo per definire un nuovo tipo di dato che combina variabili eterogenee.

/*
    Sintassi per definire una struttura:
    struct NomeStruttura {
        tipo_variabile1 nome_variabile1;
        tipo_variabile2 nome_variabile2;
        // ... altre variabili
    };

    Esempio di utilizzo:
    - Dichiarazione di una struttura: struct DatiPersonali { ... };
    - Creazione di variabili di tipo struttura: DatiPersonali persona1;
    - Accesso ai membri della struttura: persona1.nome = "Nome";
    - Utilizzo dei puntatori alle strutture: DatiPersonali *p = &persona1; p->nome = "Nome";

    Le strutture sono utili per organizzare i dati in modo logico e facilitare la gestione delle informazioni complesse.
*/


// Definizione di una struttura per memorizzare dati personali
struct DatiPersonali {
    string nome;             // Nome della persona
    string indirizzo;        // Indirizzo della persona
    string numeroDiContatto; // Numero di contatto della persona
    short eta;               // Età della persona
};

// Funzione che modifica i dati personali
void modifica(DatiPersonali *persona) {
    // Modifica il nome della seconda persona nella struttura
    (persona + 1)->nome = "Peter";
}

// Funzione principale
int main(void) {

    // Dichiarazione di un array di strutture DatiPersonali per memorizzare dati di più persone
    DatiPersonali persone[5];

    // Inizializza i dati della prima persona
    persone[0].nome = "Tridib Samanta";
    persone[0].indirizzo = "Kolkata";
    persone[0].numeroDiContatto = "+91 9000000000";
    persone[0].eta = 21;

    // Inizializza i dati della seconda persona
    persone[1].nome = "Nikola Tesla";

    // Stampa i dati della prima persona
    cout << persone[0].nome << endl;
    cout << persone[0].indirizzo << endl;
    cout << persone[0].numeroDiContatto << endl;
    cout << persone[0].eta << endl;

    cout << endl;

    // Modi per ottenere i valori usando i puntatori
    cout << (*persone).nome << endl;       // Accesso al nome della prima persona
    cout << (*(persone + 1)).nome << endl; // Accesso al nome della seconda persona
    cout << (*&persone[0]).nome << endl;   // Accesso al nome della prima persona (usando & e *)
    cout << (persone + 1)->nome << endl;   // Accesso al nome della seconda persona (usando ->)

    DatiPersonali *p = persone; // Dichiarazione di un puntatore alla struttura
    cout << p->nome << endl;    // Accesso al nome della prima persona tramite puntatore

    cout << endl;

    // Modifica i dati personali tramite puntatore
    modifica(p);
    cout << (p + 1)->nome << endl; // Stampa il nome modificato della seconda persona

    return 0;
}
