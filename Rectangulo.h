#include <iostream>

using namespace std;

//Se crea la clase Rectangulo
class Rectangulo{
  //Se crean los atributos de la clase Rectangulo
  private:
    double largo, ancho;
  //Se crean los metodos de la clase Rectangulo
  public:
    //Metodo constructor de la clase Rectangulo
    double calcularArea();
    //Metodos del objeto dentro de la clase Rectangulo
    void setLargo(double _largo);
    void setAncho(double _ancho);
    double getLargo();
    double getAncho();
    string str();

};
//Metodo para calcular el area
double Rectangulo::calcularArea(){
  return largo*ancho;
}

//Metodo para establecer el valor del largo
void Rectangulo::setLargo(double _largo){
  largo = _largo;
}

//Metodo para establecer el valor del ancho
void Rectangulo::setAncho(double _ancho){
  ancho = _ancho;
}

//Metodo para obtener el valor del largo
double Rectangulo::getLargo(){
  return largo;
}

//Metodo para obtener el valor del ancho
double Rectangulo::getAncho(){
  return ancho;
}

//Metodo para obtener los valores del largo y ancho en string
string Rectangulo::str(){
  return "Largo=" + to_string(largo) + "\nAncho=" + to_string(ancho);
}