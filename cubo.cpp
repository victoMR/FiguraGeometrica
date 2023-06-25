#include "cubo.h"

Cubo::Cubo(int x,int y,double h,double b,double al): Rectangulo(x,y,h,b){
    altura=al;
}
double Cubo::perimetro(){
    return Rectangulo::perimetro()*+2+altura+4;
}
double Cubo::area(){
    return Rectangulo::area()*2+getBase()*altura*2+getAltura()*altura*2;
}
double Cubo::volumen(){
    return Rectangulo::area()*altura;
}
void Cubo::dibujar(){
    Rectangulo::dibujar();  /// ESTO VA A LLAMAR A EL METODO DIBUJAR DE LA CLASE PUNTO "HERENCIA"
    cout <<"altura =  "<<altura<<endl;
}
