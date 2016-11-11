#include <iostream>
#include "Poligono.h"
#include "Pila.h"
#include "Grafo.h"

using namespace std;

template <typename T>

T mini(T x, T y){
    if (x <= y)
        return x;
    return y;
}

#define  mini_2(x, y) ((x) < (y) ? (x) : (y));

int main()
{

    /*Rectangulo *rec;
    rec = new Rectangulo;
    Triangulo *tri;
    tri = dynamic_cast <Triangulo*>(rec);
    tri = static_cast <Triangulo*>(rec);
    cout << tri -> Lados();*/

    /*Pila <double> p;
    cout << p.vacio()<< endl;;
    p.insertar(10);
    p.insertar(1);
    p.insertar(3);
    cout << p.top()<< endl;
    cout << p.vacio()<< endl;
    while(! p.vacio()){
        cout << p.top() << " ";
        p.pop();
    }*/

    /*Pila <int> p,q,s;
    p.insertar(1);
    p.insertar(2);

    q.insertar(3);
    q.insertar(4);

    s = p + q;

    cout << s.top();*/

    vector <int> a,b;
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);
    a.push_back(5);
    a.push_back(5);
    a.push_back(4);

    b.push_back(2);
    b.push_back(3);
    b.push_back(4);
    b.push_back(4);
    b.push_back(2);
    b.push_back(2);

    Grafo graf(a,b);

    cout << graf.Salidas(1);

    return 0;
}
