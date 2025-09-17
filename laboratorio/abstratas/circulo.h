#include "poligono.h"
#include <iostream>
#include <math.h>

#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo : public Poligono {
public:
    Circulo(float raio) : Poligono(1, raio) {};

    double calcularArea() const override { 
        return M_PI * this->l1*this->l1; 
    } 
};

#endif
