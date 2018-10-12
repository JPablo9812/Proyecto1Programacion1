#include "Interfaz.h"
#define USER "admin"
#define PASS "admin"
#include"GestionFlota.h"
#include"GestionRuta.h"
#include"GestionVuelo.h"
#include"Persona.h"
#include<stdio.h>
#include<conio.h>
Interfaz::Interfaz()
{


}
void Interfaz::menu(){

string *ide1=new string();
int *year1=new int;
string *model1=new string();
string *marca11=new string();
int *filas1=new int;
int *columna1=new int;
*ide1="212"; *year1=2012; *model1="boing"; *marca11="hyndai"; *filas1=5; *columna1=10;
Avion av1(ide1,year1,model1,marca11,filas1,columna1);

string *orgen1=new string();
string *destino1=new string();
string *dura1=new string();
int *escalas1=new int;
*orgen1="Brazil"; *destino1="CostaRica"; *dura1="4"; *escalas1=1;
Rutas ru1(orgen1,destino1,dura1,escalas1);

string *fecha1= new string();
string *horaDeSalida1 = new string();
string *horaDeLlegada1 = new string();
string *AeropuertoSalida1 = new string();
string *AeropuertoLlegada1 = new string();
string *Piloto1 = new string();
string *listaDePasajeros1 = new string();
*fecha1="martes"; *horaDeSalida1="10"; *horaDeLlegada1="2"; *AeropuertoSalida1="sanjose"; *AeropuertoLlegada1="maracanao"; *Piloto1="carlos"; *listaDePasajeros1="100";
Vuelo *vu1=new Vuelo(fecha1,horaDeSalida1,horaDeLlegada1,AeropuertoSalida1,AeropuertoLlegada1,Piloto1,listaDePasajeros1,av1,ru1);

GestionVuelo *v1=new GestionVuelo(av1,ru1);
v1->LLenar_vuelo(*vu1);
GestionFlota *f1=new GestionFlota();
f1->LLenar_flota(av1);
GestionRuta *r1=new GestionRuta();
r1->LLenar_ruta(ru1);

string usuario,password;
bool ingresa=false;
int op;

system("cls");
cout<<"Bienvenido a Aerolineas Pura Vida"<<endl;
cout<<"Digite como desea ingresar al sistema"<<endl;
cout<<"1-Administrador"<<endl;
cout<<"2-Usuario"<<endl;

cin>>op;
switch(op){
do{
case 1:{
    system("cls");
cout<<"Digite el usuario"<<endl;
cin>>usuario;
cout<<"Digite la contrasena"<<endl;
cin>>password;
if(usuario==USER&&password==PASS){
    system("cls");
    int opc;
    ingresa=true;
    cout<<"Bienvenido al sistema de admin que opcion desea realizar"<<endl;
    cout<<"1-Flota"<<endl;
    cout<<"2-Rutas"<<endl;
    cout<<"3-Vuelo"<<endl;
    cout<<"4-Salir"<<endl;
    cin>>opc;
    do{
    switch(opc){
        case 1:{
            int opf;
            system("cls");
        cout<<"Cual opcion desea realizar:"<<endl;
        cout<<"1-Anadir avion"<<endl;
        cout<<"2-Eliminar avion"<<endl;
        cout<<"3-Visualizar aviones"<<endl;
        cout<<"4-Volver atras"<<endl;
        cin>>opf;
    switch(opf){
        case 1:{
        system("cls");
        string *ide=new string();
        int *year=new int;
       string *model=new string();
       string *marca1=new string();
       int *filas=new int;
       int *columna=new int;

       cout<<"digite el id del avion"<<endl;
       cin>>*ide;
       cout<<"digite el anno del avion"<<endl;
       cin>>*year;
       cout<<"digite el modelo del avion"<<endl;
       cin>>*model;
       cout<<"digite la marca del avion"<<endl;
       cin>>*marca1;
       cout<<"digite las fila del avion"<<endl;
       cin>>*filas;
       cout<<"digite las columnas del avion"<<endl;
       cin>>*columna;
       Avion *av = new Avion(ide,year,model,marca1,filas,columna);
       f1->LLenar_flota(*av);
       break;
       }
case 2:{
    int a;
       cout<<"Que numero de avion desea eliminar"<<endl;
       cin>>a;
       f1->Eliminar_av(a);
       cout<<"despues de eliminar"<<endl;
       f1->Mostrar_avion();
       system("pause");
       break;
       }
case 3:{
f1->Mostrar_avion();
system("pause");
break;
}
        }//fin metodos flota
        break;
    }//fin flota

    case 2: {
    system("cls");
    int opr;
    cout<<"Cual opcion desea realizar:"<<endl;
    cout<<"1-Anadir ruta"<<endl;
    cout<<"2-Eliminar ruta"<<endl;
    cout<<"3-Visualizar rutas"<<endl;
    cout<<"4-Volver atras"<<endl;
    cin>>opr;

    switch(opr){
        system("cls");
        case 1:{
            string *origen=new string();
            string *destino=new string();
            string *dura=new string();
            int *escalas=new int;
cout<<"digite el origen del vuelo"<<endl;
cin>>*origen;
cout<<"digite el destino del vuelo"<<endl;
cin>>*destino;
cout<<"digite la duracion del  vuelo"<<endl;
cin>>*dura;
cout<<"digite la cantidad de escalas"<<endl;
cin>>*escalas;

Rutas *ru = new Rutas(origen,destino,dura,escalas);
r1->LLenar_ruta(*ru);
break;
        }
case 2:{
    int a;
cout<<"Que numero de ruta desea eliminar"<<endl;
cin>>a;

r1->Eliminar_ru(a);
cout<<"despues de eliminar"<<endl;
r1->Mostrar_rutas();
system("pause");
break;
}
case 3:{
r1->Mostrar_rutas();
system("pause");
break;
}
 }//fin metodos ruta
 break;
    }//fin ruta
case 3:{
    system("cls");
    int opv;
    cout<<"Cual opcion desea realizar:"<<endl;
    cout<<"1-Anadir vuelo"<<endl;
    cout<<"2-Eliminar vuelo"<<endl;
    cout<<"3-Visualizar vuelos"<<endl;
    cout<<"4-Volver atras"<<endl;
    cin>>opv;
    switch(opv){
    case 1:{
string *fecha= new string();
string *horaDeSalida = new string();
string *horaDeLlegada = new string();
string *AeropuertoSalida= new string();
string *AeropuertoLlegada= new string();
string *Piloto= new string();
int avi;
int rut;
string *listaDePasajeros= new string();

       cout<<"digite la fecha del vuelo"<<endl;
       cin>>*fecha;
       cout<<"digite hora de salida del vuelo"<<endl;
       cin>>*horaDeSalida;
       cout<<"digite hora de llegada del vuelo"<<endl;
       cin>>*horaDeLlegada;
       cout<<"digite el nombre del aeropuerto de salida"<<endl;
       cin>>*AeropuertoSalida;
       cout<<"digite el nombre del aeropuerto de llegada"<<endl;
       cin>>*AeropuertoLlegada;
       cout<<"digite el nombre del piloto"<<endl;
       cin>>*Piloto;
       cout<<"digite la lista de pasajeros"<<endl;
       cin>>*listaDePasajeros;
       f1->Mostrar_avion();
       cout<<"digite cual avion desea asignar"<<endl;
       cin>>avi;
       r1->Mostrar_rutas();
       cout<<"digite cual ruta desea asignar"<<endl;
       cin>>rut;

       Avion nuevoAvion = f1->Vflota[avi-1];
       Rutas nuevaRuta = r1->Vrutas[rut-1];
       Vuelo *vu = new Vuelo(fecha,horaDeSalida,horaDeLlegada,AeropuertoSalida,AeropuertoSalida,Piloto,listaDePasajeros, nuevoAvion ,nuevaRuta);
       v1->LLenar_vuelo(*vu);
       break;
    }
    case 2:{
    int n;
cout<<"Que numero de ruta desea eliminar"<<endl;
cin>>n;

v1->Eliminar_vu(n);
cout<<"despues de eliminar"<<endl;
v1->Mostrar_vuelo();
system("pause");
break;
}
case 3:{
v1->Mostrar_vuelo();
system("pause");
break;
}
    }//fin metodos vuelo
    break;
}//fin vuelo

}//fin gestiones
}while(opc == 1 || opc ==2 || opc==3);
}//fin registro admin
}//fin case 1
}while(ingresa == false);
case 2:{
    string *nombre1=new string();
    string *id1=new string();
    int vuelo;
cout<<"*********Bienvenid(@)*********"<<endl;
cout<<"Digite su nombre"<<endl;
cin>>*nombre1;
cout<<"Digite su id"<<endl;
cin>>*id1;
Persona *pe=new Persona(nombre1,id1);
v1->Mostrar_vuelo();
cout<<"cual vuelo desea comprar"<<endl;
cin>>vuelo;

cout<<pe->toString();


break;
}

}//fin switch menu

}//fin menu
Interfaz::~Interfaz()
{
    //dtor
}
