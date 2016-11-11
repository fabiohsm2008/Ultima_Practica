#include <iostream>
#include "Arreglo.h"
#include <math.h>

using namespace std;

Arreglo :: Arreglo()
{
    largo = 0;
    array_punto = new Punto[largo];
}

Arreglo :: Arreglo(const Punto arreglo_puntos[], const int tamanio)
{
    largo = tamanio;
    array_punto = new Punto[largo];
    int i;
    for(i = 0; i != tamanio; ++i){
        array_punto[i] = arreglo_puntos[i];
    }
}

Arreglo :: Arreglo(Arreglo &arrayX)
{
    largo = arrayX.largo;
    array_punto = new Punto[largo];
    int i;
    for(i = 0; i != largo; ++i){
        array_punto[i] = arrayX.array_punto[i];
    }
}

void Arreglo :: cambiar_largo(const int x)
{
    Punto *a;
    a = new Punto[x];
    this -> largo = x;
    int i;
    for(i = 0; i < x; ++i){
        a[i] = array_punto[i];
    }
    delete[] array_punto;
    array_punto = a;
}

void Arreglo :: imprimir_arreglo()
{
    int i;
    for(i = 0; i != largo; ++i){
        array_punto[i].imprimir_punto();
    }
}

void Arreglo :: insertar_fin()
{
    double a;
    double b;
    cin >> a;
    cin >> b;
    Punto valor(a, b);
    cambiar_largo(largo +1);
    array_punto[largo-1] = valor;
}

void Arreglo :: insertar_posicion()
{
    int posicion;
    cin >> posicion;
    double a;
    double b;
    cin >> a;
    cin >> b;
    Punto valor(a, b);
    if (posicion >= largo){
        cambiar_largo(largo+1);
        array_punto[largo-1] = valor;
    }
    else if (posicion <= 0){
        cambiar_largo(largo+1);
        int x;
        x = 0;
        while(x != (largo-1)){
            array_punto[largo-(x+1)] = array_punto[largo-(x+2)];
            ++x;
        }
        array_punto[0] = valor;
    }
    else {
        cambiar_largo(largo+1);
        int x,a;
        x = 0;
        a = posicion;
        while(a != (largo-1)){
            ++a;
            array_punto[largo-(x+1)] = array_punto[largo-(x+2)];
            ++x;
        }
        array_punto[posicion] = valor;
    }

}

const int Arreglo :: obtener_tamanio()
{
    return largo;
}

void Arreglo :: remover()
{
    int posicion;
    cin >> posicion;
    if (posicion >= (largo-1)){
        cambiar_largo(largo-1);
    }
    if (posicion < (largo-1)){
        while (posicion != (largo-1)){
            array_punto[posicion] = array_punto[posicion+1];
            ++posicion;
        }
        cambiar_largo(largo-1);
    }
    if (posicion = 0){
        while(posicion != (largo-1)){
            array_punto[posicion] = array_punto[+1];
            ++posicion;
        }
        cambiar_largo(largo-1);
    }
}

void Arreglo :: limpiar()
{
    delete array_punto;
    cambiar_largo(0);
}

Punto *Arreglo::getPunto(const int x)
{
    int i;
    for (i=0; i!= largo; ++i){
        if(i==x)
            return &array_punto[i];
    return NULL;
    }
}

double Arreglo :: distancia(Punto a, Punto b)
{
    double resultado, A, B;
    A =  b.getX() - a.getX();
    B = b.getY() - a.getY();
    resultado = sqrt(pow(A,2)+pow(B,2));
    return resultado;
}
