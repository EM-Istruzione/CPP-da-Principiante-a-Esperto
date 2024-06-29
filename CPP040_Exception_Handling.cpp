/**
 * Author:          Tridib Samanta
 * Translated by:   Elia Menoni
 * Created:         03.03.2020
 * Updated:         30.06.2024
 **/

 #include<iostream>
 using namespace std;

 class DivisionByZeroException
 {
    public:
        void getErrorMessage()
        {
            cout<<"Error : Do not divide by zero !"<<endl;
        }
 };

 double division(double a,double b) throw(DivisionByZeroException)
 {
     if(b==0)
        throw DivisionByZeroException();
    return a/b;
 }

 int int main(void) {
    double result;
    try {
        result = division(13,0);
        cout<<"The result is = "<<result<<endl;
    }
    //This catch block handles DivisionByZeroException type of exception only
    catch(DivisionByZeroException e) {
        e.getErrorMessage();
    }
    //This catch block handles all other types of exceptions
    catch(...)
    {
        cout<<"Error !"<<endl;
    }
    return 0;
}
