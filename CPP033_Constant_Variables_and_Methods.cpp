/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         02.02.2020
 * Updated:         30.06.2024
 **/

#include<iostream>
using namespace std;

class Demo
{
    public:
    void showMessage()
    {
        cout<<"Hello World inside showMessage()"<<endl;
    }
    void display()const
    {
        const double PI=3.14;
        cout<<"Hello world inside display()"<<endl;
        cout<<PI<<endl;
    }
};

int int main(void)
{
    const Demo d1;
    //d1.showMessage(); Error occurred if uncomment.
    d1.display();
    return(0);
}
