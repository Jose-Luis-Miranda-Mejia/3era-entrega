#ifndef COCHES_H
#define COCHES_H
#include <string>
#include <iostream>
#include <sstream>
#include "Servicios.h"

using namespace std;

class Coches:public Servicios{
  private:
    string jabones;
    string tamanio;
    string tise;
  public:
    //constructores
    Coches();
    
    Coches(int i, string s, string h, string m,int t, int c, string j, string ta, string ts);
    //getters y setters
    string get_Jabones();
    string get_Tamanio();
    string get_Tise();
    void set_Jabones(string j);
    void set_Tamanio(string t); 
    void set_Tise(string ts); 
    string to_String();
};

Coches::Coches(){  //default
  jabones = "";
  tamanio = "";
  tise = "";
}
Coches::Coches(int i, string s, string h, string m,int t, int c, string j, string ta, string ts):Servicios(i,s,h,m,t,c),jabones(j), tamanio(ta), tise(ts){}

string Coches::get_Jabones(){
  return jabones;
}

string Coches::get_Tamanio(){
  return tamanio;
}

string Coches::get_Tise(){
  return tise;
}

void Coches::set_Jabones(string j){
  jabones = j;
}

void Coches::set_Tamanio(string t){
    tamanio = t;
}
void Coches::set_Tise(string ts){
  tise = ts;
}
string Coches::to_String(){
  stringstream aux;
  // agregar letreros
  aux <<"ID: "<<idS << "\nServicio:"<<servicio<<"\nHerramienta" << herramienta<<"\nMateriales" << materiales << tiempo <<costo<< jabones << tamanio << tise<<endl;
  return aux.str();
}
#endif
