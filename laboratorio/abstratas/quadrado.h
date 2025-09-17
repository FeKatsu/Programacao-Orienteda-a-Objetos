#include "retangulo.h"
#include <iostream>
#include <math.h>

#ifndef QUADRADO_H
#define QUADRADO_H

class Quadrado : public Retangulo {
public:
    Quadrado(float l1) : Retangulo(l1, l1) {};
};

#endif