#include "poligono.h"
#include <iostream>
#include <math.h>

#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo : public Poligono {
public:
    Retangulo(float l1, float l2) : Poligono(4, l1, l2) {};

    double calcularArea() const override { 
        return this->l1*this->l2; 
    } 
};

#endif