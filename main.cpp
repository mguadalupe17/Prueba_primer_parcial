//Guadalupe Chasiquiza  1752701381 mchasiquiza@est.ups.edu.ec



#include <iostream>

#include "punto.h"
#include "linea.h"
using namespace std;

int Linea::numl = 0;

int main()
{
    Punto p(3,2);
    Punto p2(7,1);
    cout<<"Punto Numero 1:\n";
    cout<<p.to_String();
    cout<<"\nPunto Numero 2:\n";
    cout<<p2.to_String();
    Linea l(&p,&p2);
    cout<<"\n Linea:\n";
    cout<<l.to_String();
    return 0;
}
