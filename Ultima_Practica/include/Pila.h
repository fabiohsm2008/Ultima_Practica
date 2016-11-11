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
    Pila < T > a, temp1, temp2;
    temp1 = p1;
    temp2 = p2;
    while(! temp2.vacio() ){
        a.insertar(temp2.top());
        temp2.pop();
    }
    while(! temp1.vacio() ){
        a.insertar(temp1.top());
        temp1.pop();
    }
    return a;
}

#endif // PILA_H
