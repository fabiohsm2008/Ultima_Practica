#include "Grafo.h"

Grafo :: Grafo(vector<int> &inicio, vector<int> &fin)
{

    int i;
    for(i = 0 ; i < inicio.size() ;i++)
        graf[inicio[i]].push_back(fin[i]);
}

int Grafo :: Salidas(const int ID_nodo) const
{
    return adyacencia(ID_nodo).size();
}

const vector <int> Grafo :: adyacencia(const int ID_nodo) const
{
    return graf.find(ID_nodo) -> second;
}

