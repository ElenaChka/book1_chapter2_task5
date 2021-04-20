// Программа для вычмсления натурального логарифма ln(1+x)
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    double x;
    cout << " Vvedite zhachenie x ";
    cin >> x;
    double dobavlenie = 1, summa = 0, predel;
    int n;
    cout << " Vvedite predel summi ";
    cin >> predel;
    for ( int n = 1; abs(dobavlenie) > predel; n ++ )
    {

        dobavlenie = (pow(-1, n+1)* pow (x,n))/n;
        summa += dobavlenie;
        cout << " ln(1+x)=  " << summa    <<  " Dobavlenie =  " << dobavlenie << endl;
    }

}
