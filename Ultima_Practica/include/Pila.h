#ifndef PILA_H
#define PILA_H
#include <vector>
#include <iostream>

using namespace std;

template <class T>

class Pila{
private:
    vector <T> _pilas;
public:
    bool vacio(){
        _pilas.empty();
    }
    void insertar(const T &valor){
        _pilas.push_back(valor);
    }
    T top(){
        return _pilas.back();
    }
    void pop(){
        _pilas.pop_back();
    }

};

template <typename T>

Pila<T> operator +(Pila <T> p1, Pila<T> p2){
    Pila < T > a;
    while(! p2.vacio() ){
        a.insertar(p2.top());
        p2.pop();
    }
    while(! p1.vacio() ){
        a.insertar(p1.top());
        p1.pop();
    }
    return a;
}

#endif // PILA_H
