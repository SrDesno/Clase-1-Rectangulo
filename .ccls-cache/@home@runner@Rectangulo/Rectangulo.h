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
    void setLargo(double _largo);
    void setAncho(double _ancho);
    double getLargo();
    double getAncho();
    string str();

};

double Rectangulo::calcularArea(){
  return largo*ancho;
}
void Rectangulo::setLargo(double _largo){
  largo = _largo;
}

void Rectangulo::setAncho(double _ancho){
  ancho = _ancho;
}

double Rectangulo::getLargo(){
  return largo;
}

double Rectangulo::getAncho(){
  return ancho;
}

string Rectangulo::str(){
  return "Largo=" + to_string(largo) + "\nAncho=" + to_string(ancho);
}