#include "rectangulo.h"
#include <cmath>
Rectangulo::Rectangulo(int x,int y, double h,double b) : Punto(x,y){
    altura=h;
    base=b;
}
double Rectangulo::perimetro(){
    return 2*base+2*altura;
}
double Rectangulo::area(){
    return base*altura;
}
void Rectangulo::dibujar(){
    //cout<<"Rectangulo"<<endl;
    Punto::dibujar();  /// ESTO VA A LLAMAR A EL METODO DIBUJAR DE LA CLASE PUNTO "HERENCIA"
    cout <<"Ancho  = "<<base<<endl;
    cout <<"Largo = "<<altura<<endl;
    //cout <<"Perimetro= "<<perimetro()<<endl;
    //cout <<"Area = "<<area()<<endl<<endl;
}
double Rectangulo::getAltura() const
{
    return altura;
}
double Rectangulo::getBase() const
{
    return base;
}
