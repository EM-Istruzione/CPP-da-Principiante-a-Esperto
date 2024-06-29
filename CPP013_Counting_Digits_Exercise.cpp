/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         14.01.2020
 * Updated:         30.06.2024
 **/

#include<iostream>
using namespace std;

int main(void) {
    int num,digits_count=1;
    cin>>num;
    int temp=num;
    //Divide the number by 10, until we get quotient as 0
    while(temp/=10)
        //Increase the digit count by 1
        digits_count++;

    cout<<"The number "<<num<<" has "<<digits_count<<" digit(s)"<<endl;
}
