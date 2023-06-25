#ifndef CILINDRO_H   ///clase derivada de circulo
#define CILINDRO_H
#include "circulo.h"

class Cilindro : public Circulo{
public:
    Cilindro(int ,int,double,double);
    double perimetro();
    double area();
    void dibujar();
    double volumen();
private:
    double altura=0;

};

#endif // CILINDRO_H
