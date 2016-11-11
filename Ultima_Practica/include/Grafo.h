#ifndef GRAFO_H
#define GRAFO_H
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Grafo
{
private:
    map <int, vector <int> > graf;
public:
    Grafo(vector <int> &inicio, vector <int> &fin);
    int Salidas(const int ID_nodo)const;
    const vector <int> adyacencia(const int ID_nodo) const;
};

#endif // GRAFO_H
