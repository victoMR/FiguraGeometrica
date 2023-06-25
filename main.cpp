#include <QCoreApplication>
#include "cilindro.h"
#include "cubo.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Punto *pUno=new Punto(5,6);
    Punto *pDos=new Circulo(3,4,5);
    Punto *pTres=new  Cilindro(1,2,5,4);
    Punto *rec =new Rectangulo(1,2,3,4);
    Punto *cub =new Cubo(1,2,3,4,5);
    //Circulo *c=new Circulo(3,4,5);
    //Cilindro *cil=new Cilindro(1,2,5,4);
    cout <<"======================"<<endl;
    cout <<"Punto ="<<endl;
    pUno->dibujar();
    cout <<"======================";
    cout<<endl<<"Circulo"<<endl;
    pDos->dibujar();
    cout <<"======================";
    cout <<endl<<"Cilindro"<<endl;
    pTres->dibujar();
    cout <<"======================"<<endl;
    cout <<"Rectangulo "<<endl;
    rec->dibujar();
    cout <<"\nCubo "<<endl;
    cub->dibujar();
    cout <<"======================"<<endl;
    return a.exec();
}
