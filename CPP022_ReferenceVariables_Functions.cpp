/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         16.01.2020
 * Updated:         30.06.2024
 **/

#include<iostream>
using namespace std;

void swap(int &, int &);

int int main(void) {

    int a=10,b=20;
    swap(a,b);

    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    return 0;
}

void swap(int &a, int &b) {
    int t;
    t=a;
    a=b;
    b=t;

}
