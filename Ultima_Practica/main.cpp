#include <iostream>
#include "Poligono.h"
#include "Pila.h"

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
    Pila <int> p,q,s;
    p.insertar(1);
    p.insertar(2);

    q.insertar(3);
    q.insertar(4);

    s = p + q;

    cout << s.top();

    return 0;
}
