/*
 * Proyecto Servicios venta Grupo JL
 * José Luis Miranda Mejia
 * A01704696
 * 12/11/2020
 */

/*
 * Clase servicio contiene los métodos genéricos para el manejo de empleados
 * y tiene 3 clases que son los atributos a cada servicio:
 * Tipo de servicio, costos y tiempo
 *
 */

#ifndef TAPICERIA_H
#define TAPICERIA_H
#include <string>
#include <iostream>
#include <sstream>
#include "Servicios.h"

using namespace std;

class Tapiceria: public Servicios{
    private:
    string tise;
    string tamanio;
    // string tipoTela;
    public:
    Tapiceria();
    Tapiceria(int i, string s, string h, string m,int t, int c, string ts, string ta);
    string get_Tise();
    string get_Tamanio();
    void set_Tise(string ts);
    void set_Tamanio(string t);
    string to_String();
};

Tapiceria::Tapiceria(){
    tise = "";
    tamanio = "";
}

Tapiceria::Tapiceria(int i, string s, string h, string m,int t, int c, string ts, string ta):Servicios(i,s,h,m,t,c), tise(ts), tamanio(ta){}

string Tapiceria::get_Tise(){
    return tise;
}

string Tapiceria::get_Tamanio(){
    return tamanio;
}
void Tapiceria::set_Tise(string ts){
    tise=ts;
}
void Tapiceria::set_Tamanio(string ta){
    tamanio=ta;
}
string Tapiceria::to_String(){
  stringstream aux;
  // agregar letreros
  aux <<"Id" <<idS << "Servicio: "<<servicio<<"\n" << "herramienta" << herramienta<<"\n" << "materiales" <<  materiales<<"\n" <<"tiempo" << tiempo<<"\n" <<"costo" <<costo<<"\n" <<"tamanio" << tamanio<<"\n" << tise<<endl;
  return aux.str();
}

#endif