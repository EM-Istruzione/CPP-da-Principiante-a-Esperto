/**
 * Author:    Tridib Samanta
 * Created:   14.11.2019
 **/

#include <iostream>

using namespace std;

int main(void) {
    int a = 10;
    int b = 5;

    // Si ricorda che True = 1 e False = 0 ;
    cout << (a == b) << endl; // Eguaglianza: restituisce True se il valore di a e' uguale al valore di b
    cout << (a != b) << endl; // Diverso: restituisce True se il valore di a e' diverso dal valore di b
    cout << (a < b) << endl;
    cout << (a > b) << endl;
    cout << (a <= b) << endl;
    cout << (a >= b) << endl;
    cout << !(a == b) << endl; // (a != b)

    return 0;
}
