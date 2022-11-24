//Guadalupe Chasiquiza 1752701381 mchasiquiza@est.ups.edu.ec
#ifndef LINEA_H
#define LINEA_H

#include "punto.h"
class Linea
{
public:
    static int numl;
    Linea();
    Linea(Punto *p1, Punto *p2);
    float getD();
    float getM();
    string to_String();
    Punto *getP1();
    Punto *getP2();
private:
    float d;
    float m;
    Punto *p1;
    Punto *p2;
};

#endif // LINEA_H
