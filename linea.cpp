#include <math.h>
#include "linea.h"
#include "punto.h"

Linea::Linea()
{
    this->p1 = new Punto(2,1);
    this->p2 = new Punto(5,2);
    numl++;
}

Linea::Linea(Punto *p1, Punto *p2)
{
    this->p1 = p1;
    this->p2 = p2;
    numl++;
}

float Linea::getD()
{
    d = sqrt(pow((p2->getX()-p1->getX()),2)+pow((p2->getY()-p1->getY()),2));
    return d;
}

Punto *Linea::getP1()
{
    return p1;
}

Punto *Linea::getP2()
{
    return p2;
}

float Linea::getM()
{
    return m;
}

string Linea::to_String()
{
    return "L"+to_string(numl)+"[P(" + to_string(p1->getX()) +","+to_string(p1->getY())
            + ")-P(" + to_string(p2->getX())+","+to_string(p2->getY()) + "), d = "+to_string(getD())+", m = "+to_string(getM()) + "]\n";
}
