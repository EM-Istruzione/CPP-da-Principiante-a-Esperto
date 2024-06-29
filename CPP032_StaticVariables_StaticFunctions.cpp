/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         02.02.2020
 * Updated:         30.06.2024
 **/

#include<iostream>
using namespace std;

class StaticFunction
{
   public:
    static int my_var;
    static void display()
    {
        cout<<"Static member function"<<endl;
    }
};

int StaticFunction::my_var=50;

void demo()
{
    static int count = 1;
    cout <<"Value of count is - "<< count <<endl;
    count++;
}

int int main(void)
{
    for (int i=1; i<=5; i++)
        demo();

    StaticFunction::display();

    StaticFunction ob;
    cout <<"Value is : "<<ob.my_var<<endl;

    return 0;
}
