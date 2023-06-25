#include "cilindro.h"
#include <cmath>
Cilindro::Cilindro(int x,int y,double r,double h):
    Circulo(x,y,r){
    altura=h;
}
double Cilindro::perimetro(){
    return Circulo::perimetro()*+2+altura*2;
}
double Cilindro::area(){
    return Circulo::perimetro()*altura;
}
double Cilindro::volumen(){
    return Circulo::area()*altura;
}
void Cilindro::dibujar(){
    Circulo::dibujar();  /// ESTO VA A LLAMAR A EL METODO DIBUJAR DE LA CLASE PUNTO "HERENCIA"
    //cout <<"Cilindro"<<endl;
    cout <<"altura =  "<<altura<<endl;
    //cout <<"Perimetro= "<<perimetro()<<endl;
    //cout <<"Area = "<<area()<<endl;

}
