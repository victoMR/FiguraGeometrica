#ifndef CIRCULO_H  ///clase derivada de punto
#define CIRCULO_H
#include "punto.h"
        //👇  estos : signifiacan herencia
class Circulo : public Punto{  //hereda todos los public de el punto.h

public:
    Circulo(int,int,double);   // double same like as float , float mas pequeño
     double perimetro();
     double area();
     void dibujar();
private:
    double radio=0;

};
#endif // CIRCULO_H
