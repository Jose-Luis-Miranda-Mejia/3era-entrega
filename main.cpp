/*
 * Jose luis Miranda
 * A01703867
 * 16/10/2019
 * Proyecto agencia coches/motos honda
 */

/**
 * Descripcion este proyecto es hacerca de mi negocio
 * El cual es un programa que captura
 * diferentes tipos de empleados con sus respectivos sueldos, y nos
 * permite calcular la nomina para cada tipo de empleado diferente.
*/

//Bibliotecas
#include <iostream>   //para imprimir.
#include "Catalogo.h"
#include "Tapiceria.h"    
#include "Servicios.h"
#include "Coches.h" //donde estan los serivios de los coches.

using namespace std;

//Procedimiento menu
void menu(){

    //Imprime las opciones que va a tener el sistema
    //menu cliente
    cout << "Menu:\n";
    cout << "1. Mostrar servicios de coche. \n";
    cout << "2. Mostrar servicios de tapiceria. \n";
    cout << "3. Cotizacion Coches. \n";
    cout << "4. Cotizacion tapiceria. \n";
    //menu para el admin
    cout << "5. Agregar servicios coches. \n";
    cout << "6. Agregar servicios Tapiceria. \n";
    cout << "7. Modificar serivicios coches. \n";
    cout << "8. Modificar serivicios tapiceria. \n";
    cout << "9. Salir \n";
}

int main(int argc, char* argv[]){


    int opcion = 0;
    int t_idS;// t es de temporal y es la variable en la que vamos a pedir el valor para las variable de instancia
    string t_herramienta;
    string t_materiales;
    int t_tiempo;
    int t_costo;    
    string t_jabones;
    string t_tamanio;
    string t_tise;
 



    // Creamos el catálogo vacio la primera vez
    Catalogo catalogo;
   Coches sc1plus(1,"Coches","K4 y aspiradora","Agua y trapo",35,90,"ceramico","mediano","lavado coche");
   //cout << sc1plus.to_String() << endl;
   Coches sc1(2,"Coches","K4 ","Agua y trapo",30,50,"ceramico","mediano","lavado coche");
  // cout << sc1.to_String() << endl;
   Coches sc2plus(3,"Camionetas","K4 y Aspiradora","Agua y trapo",40,120,"ceramico","mediano","lavado coche");
   //cout << sc2plus.to_String() << endl;
   Coches sc2(4,"Camionetas","K4 y Aspiradora","Agua y trapo",40,70,"ceramico","mediano","lavado coche");
   //cout << sc2plus.to_String() << endl;
   
   catalogo.agrega_SC(sc1plus);
   catalogo.agrega_SC(sc1);
   catalogo.agrega_SC(sc2plus);
   catalogo.agrega_SC(sc2);

    //Ciclo para que el sistema siga corriendo mientras no elija la opcion salir.
    while(opcion < 9 && opcion > -1){

  		//Impresion de menu
  		menu();
  		//Leer indice que selecciona la opcion del menu
  		cin >> opcion;
        cout << opcion;
  		//Switch donde dependiendo la eleccion efectua un diferente procedimiento
  		switch(opcion){

  			//Caso 1 "imprimira" los servicios.
  			case 1:
         /*     cout << "Indica el id del servicio"<<endl;
              cin >> t_idS;
              cout << "Indica las herramientas a utilizar para este servicio de auto"<<endl;
              cin >> t_herramienta;
              cout << " Indica los materiales a utilizar para este servicio"<<endl;
              cin >> t_materiales;
              //Coches(int i, string s, string h, string m,int t, int c, string j, string ta, string ts);
              Coches sc1plus();
              //sc1plus.set_Ids(t_idS);
              //Coches sc1plus(2,"Coches",t_herramienta,t_materiales,35,"ceramico","mediano","lavado coche");

          */
              cout << catalogo.to_StringC()<<endl;
  			  break;
           case 5:
         /*     cout << "Indica el id del servicio"<<endl;
              cin >> t_idS;
              cout << "Indica las herramientas a utilizar para este servicio de auto"<<endl;
              cin >> t_herramienta;
              cout << " Indica los materiales a utilizar para este servicio"<<endl;
              cin >> t_materiales;
              //Coches(int i, string s, string h, string m,int t, int c, string j, string ta, string ts);
              //sc1plus.set_Ids(t_idS);
              //Coches sc1plus(2,"Coches",t_herramienta,t_materiales,35,"ceramico","mediano","lavado coche");

          */

           break;
  		}
    }
    
   // Instanciar o crear objetos
   /*
   //(string s, string h, string m,int t, string j, string t, string ts)
   Coches sc1plus("Coches","K4 y aspiradora","Agua y trapo",35,"ceramico","mediano","lavado coche");
   //cout << sc1plus.to_String() << endl;
   Coches sc1("Coches","K4 ","Agua y trapo",30,"ceramico","mediano","lavado coche");
  // cout << sc1.to_String() << endl;
   Coches sc2plus("Camionetas","K4 y Aspiradora","Agua y trapo",40,"ceramico","mediano","lavado coche");
   //cout << sc2plus.to_String() << endl;
   Coches sc2("Camionetas","K4 y Aspiradora","Agua y trapo",40,"ceramico","mediano","lavado coche");
   //cout << sc2plus.to_String() << endl;
   Catalogo catalogo;
   catalogo.agrega_SC(sc1plus);
   catalogo.agrega_SC(sc1);
   catalogo.agrega_SC(sc2plus);
   catalogo.agrega_SC(sc2);
   cout << catalogo.get_cuantosC() <<endl;
   cout << catalogo.to_StringC();
*/
}
