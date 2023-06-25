#ifndef CUBO_H
#define CUBO_H
#include "rectangulo.h"

class Cubo :public Rectangulo{

public:
    Cubo();
    Cubo(int ,int,double,double,double);
    double perimetro();
    double area();
    void dibujar();
    double volumen();
private:
    double altura=0;
};

#endif // CUBO_H
