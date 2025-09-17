#include <iostream>
#include <vector>
#include "circulo.h"
#include "retangulo.h"
#include "quadrado.h"
#include "poligono.h"

int main() {
    Circulo *c = new Circulo(2);
    std::cout<<"Circulo:"<<std::endl;
    std::cout<<c->calcularArea()<<std::endl;

    std::cout<<"Retangulo:"<<std::endl;
    Retangulo *r = new Retangulo(2, 4);
    std::cout<<r->calcularArea()<<std::endl;


    std::cout<<"Quadrado:"<<std::endl;
    Quadrado *q = new Quadrado(2);
    std::cout<<q->calcularArea()<<std::endl;

    delete c;
    delete r;
    delete q;
    
    return 0;
}