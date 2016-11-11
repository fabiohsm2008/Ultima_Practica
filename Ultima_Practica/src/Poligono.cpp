#include "Poligono.h"
#include "Punto.h"
#include <math.h>

Poligono :: Poligono(){}
int Poligono :: instancias = 0;

Poligono :: Poligono(const Punto arreglo_puntos[], const int tamanio)
{
    Arreglo a(arreglo_puntos, tamanio);
    puntos = a;
}

Poligono :: Poligono(Arreglo &arreglo_puntos)
{
    puntos = arreglo_puntos;
}

int Poligono :: getNumPoligonos()
{
    return instancias;
}

const Arreglo *Poligono :: getPuntos()
{
    return &puntos;
}

Rectangulo :: Rectangulo(Punto &a, Punto &b)
{
    Punto *aux;
    aux = new Punto[4];
    aux[0] = a;
    aux[1] = Punto(a.getX(),b.getY());
    aux[2] = Punto(a.getY(),b.getX());
    aux[3] = b;
    Arreglo r(aux,4);
    puntos = r;
    ++instancias;
}

Rectangulo :: Rectangulo(int x0, int y0, int x1, int y1)
{
    Punto *aux;
    aux = new Punto[4];
    aux[0] = Punto(x0,y0);
    aux[1] = Punto(x1,y0);
    aux[2] = Punto(x0,y1);
    aux[3] = Punto(x1,y1);
    Arreglo r(aux,4);
    puntos = r;
    ++instancias;

}

double Rectangulo :: area()
{
    double base, altura;
    Punto *a = puntos.getPunto(0);
    Punto *b = puntos.getPunto(1);
    Punto *d = puntos.getPunto(3);
    base = puntos.distancia(*a,*b);
    altura = puntos.distancia(*b,*d);
    return base*altura;
}

double Rectangulo :: Lados()
{
    return 4;
}

Triangulo :: Triangulo(Punto &a, Punto &b, Punto &c)
{
    Punto *aux;
    aux = new Punto[3];
    aux[0] = a;
    aux[1] = b;
    aux[2] = c;
    Arreglo r(aux, 3);
    puntos = r;
    ++instancias;
}

double Triangulo :: area()
{
    double distancia_a, distancia_b, distancia_c, s, resultado;
    distancia_a = puntos.distancia(*puntos.getPunto(0),*puntos.getPunto(1));
    distancia_b = puntos.distancia(*puntos.getPunto(0),*puntos.getPunto(2));
    distancia_c = puntos.distancia(*puntos.getPunto(1),*puntos.getPunto(2));
    s = (distancia_a+distancia_b+distancia_c)/2;
    resultado = s*(s-distancia_a)*(s-distancia_b)*(s-distancia_c);
    return sqrt(resultado);
}

double Triangulo :: Lados()
{
    return 3;
}
