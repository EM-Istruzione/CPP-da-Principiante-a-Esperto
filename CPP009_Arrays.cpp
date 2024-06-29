/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         17.11.2019
 * Updated:         30.06.2024
 **/

#include <iostream>
using namespace std;

int main(void)
{
    int array[4]; // Nome_Tipo[Dimensione] -- Con dimensione N gli indici vanno da 0 a N-1

    // Inizializzazione
    array[0]=10;
    array[1]=20;
    array[2]=30;
    array[3]=40;

    // Stampa degli elementi dell'array e dell'indirizzo di ciascun elemento
    cout<<"array[0] = "<<array[0]<<" , Indirizzo = "<<&array[0]<<endl;
    cout<<"array[1] = "<<array[1]<<" , Indirizzo = "<<&array[1]<<endl;
    cout<<"array[2] = "<<array[2]<<" , Indirizzo = "<<&array[2]<<endl;
    cout<<"array[3] = "<<array[3]<<" , Indirizzo = "<<&array[3]<<endl;

    if(&array[0] == array)
        cout<<"VERO";

    return 0;
}
