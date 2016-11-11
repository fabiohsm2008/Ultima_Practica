#include <iostream>
#include "Punto.h"

using namespace std;

Punto :: Punto()
{
    x = 0.0; y = 0.0;
}

Punto :: Punto(double ax, double ay)
{
    x = ax; y = ay;
}

Punto :: Punto(Punto &o)
{
    x = o.x; y = o.y;
}

void Punto::setX(double nx){
    x = nx;
}

void Punto :: setY(double ny){
    y = ny;
}

double Punto :: getX(){
    return x;
}

double Punto :: getY(){
    return y;
}

void Punto :: imprimir_punto(){
    cout << "(" << x << "," << y << ")"<< endl;
}

void Punto :: modificar_punto(double kx, double ky){
    x = kx; y = ky;
}
