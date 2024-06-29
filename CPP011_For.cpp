/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         18.11.2019
 * Updated:         30.06.2024
 **/

 #include<iostream>
 using namespace std;

 int main(void) {
    /*
        for(initialization;condition;inc/dec)
            instructions_to_repeat;
    */

    for(int i=0;i<3;i++)
        cout<<"Hello"<<endl;

    int array[4];

    for(int i=0;i<4;i++)
        array[i]=i; //Initialization

    for(int i=0;i<4;i++)
        cout<<array[i]<<endl; //Print array elements

    //Infinite Loop
    /*
    for(;;)
        cout<<"Stop me if you can !"<<endl;
    */
 }
