#include <iostream>
#include <string>
#ifndef POLIGONO_H
#define POLIGONO_H

class Poligono{
    public:
    Poligono(int n, float l1) : n(n), l1(l1) {}
    Poligono(int n, float l1, float l2) : n(n), l1(l1), l2(l2) {}
    virtual double calcularArea() const = 0;

    protected:
     int n;
     float l1;
     float l2;
};

#endif