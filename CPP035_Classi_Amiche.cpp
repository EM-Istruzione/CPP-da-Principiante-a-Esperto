/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         08.02.2020
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

// Dichiarazione anticipata della classe XYZ per indicare che esisterà
class XYZ;

// Definizione della classe ABC
class ABC {
  public:
    // Metodo che visualizza i membri di XYZ
    void visualizza(XYZ &oggetto);
};

// Definizione della classe XYZ
class XYZ {
  private:
    string messaggio = "Ciao Tridib"; // Variabile privata di tipo stringa
    int codicePin = 700150;           // Variabile privata di tipo intero
  public:
    // Dichiarazione di amicizia verso ABC, permettendo ad ABC di accedere ai membri privati di XYZ
    friend class ABC; // Dichiarazione di amicizia
};

// Implementazione del metodo visualizza di ABC che accede ai membri privati di XYZ
void ABC::visualizza(XYZ &oggetto) {
    cout << oggetto.messaggio << endl; // Accesso diretto al membro privato 'messaggio'
    cout << oggetto.codicePin << endl; // Accesso diretto al membro privato 'codicePin'
}

// Funzione principale
int main(void) {
    ABC visualizzatore;                    // Crea un oggetto di tipo ABC
    XYZ oggettoXYZ;                        // Crea un oggetto di tipo XYZ
    visualizzatore.visualizza(oggettoXYZ); // Visualizza i membri di XYZ tramite un oggetto ABC
    return 0;
}
