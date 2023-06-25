#include "punto.h"

Punto::Punto(int x,int y)
{
    this->x=x;  // cuando en el h y en el main se llaman igual se pone eso
    this->y=y;
}
double Punto::perimetro(){
    return 0;
}
double Punto::area(){
    return 0;
}
double Punto::volumen(){
    return 0;
}
void Punto::dibujar(){
    cout <<"P ("<<x<<" , "<<y<<")"<<endl;
    cout <<"Perimetro= "<<perimetro()<<endl;
    cout <<"Area = "<<area()<<endl;
    cout <<"Volumen = "<<volumen()<<endl;
}
