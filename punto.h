#ifndef PUNTO_H   ///clase base de circulo
#define PUNTO_H
#include <iostream>
using namespace std;

class Punto
{
public:
    Punto(int,int);
    virtual void dibujar();  /// virtual es para hacer polimorfiso
    virtual double perimetro();
    virtual double area();
    virtual double volumen();
private:
    int x=0;
    int y=0;
};
#endif // PUNTO_H
