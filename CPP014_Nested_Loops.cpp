/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         14.01.2020
 * Updated:         30.06.2024
 **/

#include<iostream>
using namespace std;

int main(void) {
    for(int i=1;i<=10;i++) {
        cout<<"Multiplication table of "<<i<<endl;
        for(int j=1;j<=10;j++) {
            //This inner loop will execute 10 times for each iteration of the outer loop
            cout<<i<<" x "<<j<<" = "<<(i*j)<<endl;
        }
        cout<<endl;
    }
}
