//Edmundo Ruelas Angulo - A01742824
#include "Rectangulo.h"

int main(){
  // Declaracion de variables
  Rectangulo rect;
  double area;

  // Ingreso de datos
  rect.setLargo(10);
  rect.setAncho(5);
  // Calculo del area
  area=rect.calcularArea();
  //Se retorna el resultado del area
  cout<<rect.str()<<"\nEl area es: "<<area<<endl;
  return 0;
}