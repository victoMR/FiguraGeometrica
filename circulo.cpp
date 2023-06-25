#include "circulo.h"
#include <cmath>
Circulo::Circulo(int x,int y, double r) : Punto(x,y){
    radio=r;

}
double Circulo::perimetro(){
    return 2*radio*M_PI;
}
double Circulo::area(){
    return radio*radio*M_PI;
}
void Circulo::dibujar(){
    //cout<<"Circulo"<<endl;
    Punto::dibujar();  /// ESTO VA A LLAMAR A EL METODO DIBUJAR DE LA CLASE PUNTO "HERENCIA"
    cout <<"Radio = "<<radio<<endl;
    //cout <<"Perimetro= "<<perimetro()<<endl;
    //cout <<"Area = "<<area()<<endl<<endl;
}
