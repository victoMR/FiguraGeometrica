#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "punto.h"

class Rectangulo : public  Punto{

public:
    Rectangulo(int ,int,double,double);
    double perimetro();
    double area();
    void dibujar();
    double getAltura() const;
    double getBase() const;

private:
    double altura=0;
    double base=0;
};

#endif // RECTANGULO_H
