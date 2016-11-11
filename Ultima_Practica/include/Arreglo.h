#ifndef ARREGLO_H
#define ARREGLO_H
#include "Punto.h"

class Arreglo{
public:
    int largo;
    Punto *array_punto;
    void cambiar_largo(const int x);
public:
    Arreglo();
    Arreglo(const Punto arreglo_puntos[], const int tamanio);
    Arreglo(Arreglo &arrayX);
    void imprimir_arreglo();
    void insertar_fin();
    void insertar_posicion();
    const int obtener_tamanio();
    void remover();
    void limpiar();
    Punto *getPunto(const int x);
    double distancia(Punto a, Punto b);
};

#endif // ARREGLO_H
