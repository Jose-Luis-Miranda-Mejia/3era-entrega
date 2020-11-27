#ifndef SERVICIOS_H_
#define SERVICIOS_H_
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Servicios{
  protected:// Visibles a las clases hijas sin getter
    int idS;
    string servicio;
    string herramienta;
    string materiales;
    int tiempo;
    int costo;
  public:
    //constructores
    Servicios();
    Servicios(int i,string s, string h, string m, int t, int c);
    //getters y setters
    int get_Ids();
    string get_Servicio();
    string get_Herramienta();
    string get_Materiales();
    int get_Tiempo();
    int get_Costo();
    void set_Ids(int i);
    void set_Servicio(string s);
    void set_Herramienta(string h);
    void set_Materiles(string m);
    void set_Tiempo(int t);
    void set_Costo(int c);

};

Servicios::Servicios(){  //default
  idS = 0;
  servicio = "";
  herramienta = "";
  materiales = "";
  tiempo = 0;
  costo = 0;
}
Servicios::Servicios(int i, string s, string h, string m,int t, int c):idS(i), servicio(s), herramienta(h), materiales(m), tiempo(t), costo(c){};

int Servicios::get_Ids(){
  return idS;
}
string Servicios::get_Servicio(){
  return servicio;
}

string Servicios::get_Herramienta(){
  return herramienta;
}

string Servicios::get_Materiales(){
  return materiales;
}

int Servicios::get_Tiempo(){
  return tiempo;
}

int Servicios::get_Costo(){
  return costo;
}

void Servicios::set_Ids(int i){
  idS = i;
}

void Servicios::set_Servicio(string s){
  servicio = s;
}

void Servicios::set_Herramienta(string h){
  herramienta = h;
}
void Servicios::set_Materiles(string m){
  materiales = m;
}

void Servicios::set_Tiempo(int t){
  tiempo = t;
}

void Servicios::set_Costo(int c){
  costo = c;
}

#endif