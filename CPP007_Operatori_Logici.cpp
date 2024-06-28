/**
 * Author:    Tridib Samanta
 * Created:   14.11.2019
 **/

#include <iostream>

using namespace std;

int main(void) {
    // AND - && (Congiunzione logica, in italiano E)
    // Tabella di Verita'
    /*
                A       |       B      |       Res
         ------------------------------------------------
              Falso     |     Falso    |      Falso
              Vero      |     Falso    |      Falso
              Falso     |     Vero     |      Falso
              Vero      |     Vero     |      Vero
    */

    cout << (7 > 5 && 5 != 10) << endl;
    cout << (2 > 5 && 5 != 10) << endl;

    // OR - || (Disgiunzione logica, in italiano OPPURE)
    // Tabella di Verita'
    /*
                A       |       B      |       Res
         ------------------------------------------------
              Falso     |     Falso    |      Falso
              Vero      |     Falso    |      Vero
              Falso     |     Vero     |      Vero
              Vero      |     Vero     |      Vero
    */
    cout << (2 > 5 || 5 != 10) << endl;
    cout << (2 > 5 || 5 != 5) << endl;

    // NOT - ! (Negazione logina, in italiano NON)
    // Inverse il valore booleano: !True = False e !False = True
    cout << !(7 > 5 && 5 != 10) << endl;

    return 0;
}
