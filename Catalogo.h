#ifndef CATALOGO_H
#define CATALOGO_H
#include <string>
#include <iostream>
#include <sstream>
#include "Servicios.h"
#include "Coches.h"
#include "Tapiceria.h"

class Catalogo{
    private:
    int cuantosC;
    int cuantosT;
    Coches listaScoches[20];
    Tapiceria listaStapiceria[20];
    
    public:
    Catalogo();
    void set_cuantosC (int cc);
    void set_cuantosT (int ct);
    int get_cuantosC();
    int get_cuantosT();
    void agrega_SC (Coches c);
    void agrega_ST (Tapiceria t);
    string to_StringC();
    string to_StringT();

};

Catalogo::Catalogo(){
    cuantosC=0;
    cuantosT=0;
}

int Catalogo::get_cuantosC(){
    return cuantosC;
}

int Catalogo::get_cuantosT(){
    return cuantosT;
}

void Catalogo::agrega_SC (Coches c){
    if (cuantosC < 20 ){
        listaScoches [cuantosC]=c;
        cuantosC++;
    }
}

void Catalogo::agrega_ST (Tapiceria t){
    if (cuantosT < 20 ){
        listaStapiceria [cuantosT]=t;
        cuantosT++;
    }
}

string Catalogo::to_StringC(){
    stringstream aux;
    aux<<" ";
    int i;
    // Objetos de servicios de coches
    for (i=0;i < cuantosC; i++){
        aux<<listaScoches[i].to_String();
    }
    
    return aux.str();
}

string Catalogo::to_StringT(){
    stringstream aux;
    aux<<" ";
    int i;
    // Objetos de servicios de tapiceria
  for (i=0;i < cuantosT; i++){
        aux<<listaStapiceria[i].to_String();
    }
  
    return aux.str();
}

#endif
