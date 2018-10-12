#ifndef VUELO_H
#define VUELO_H
#include<iostream>
#include<sstream>
#include "Rutas.h"
#include"Avion.h"

using namespace std;

class Vuelo
{
    private:
        Rutas rut;
        string *fecha;
        string *horaDeSalida;
        string *horaDeLlegada;
        string *nombreAeropuertoSalida;
        string *nombreAeropuertoLlegada;
        string *nombreDelPiloto;
        Avion avi;
        string *listaDePasajeros;

    public:
        Vuelo();
        Vuelo(string *fecha,string *horaDeSalida, string *horaDeLlegada, string *nombreAeropuertoSalida,string *nombreAeropuertoLlegada, string *nombreDelPiloto, string *listaDePasajeros, Avion avi, Rutas rut);
        virtual~Vuelo();
        void SetNombreDeLaRuta(string *nombreDeLaRuta);
        string GetNombreDeLaRuta();
        void SetFecha(string *fecha);
        string GetFecha();
        void SetHoraDeSalida(string *horaDeSalida);
        string GetHoraDeSalida();
        void SetHoraDeLlegada(string *horaDeLlegada);
        string GetHoraDeLlegada();
        void SetNombreAeropuertoSalida(string *nombreAeropuertoSalida);
        string GetNombreAeropuertoSalida();
        void SetNombreAeropuertoLlegada(string *nombreAeropuertoLlegada);
        string GetNombreAeropuertoLlegada();
        void SetNombreDelPiloto(string *nombreDelPiloto);
        string GetNombreDelPiloto();
       void SetAvionAsignado(string *avionAsignado);
        string GetAvionAsignado();
        void SetListaDePasajeros(string *listaDePasajeros);
        string GetListaDePasajeros();
        Avion GetAvi();
        void SetAvi(Avion avi);
        Rutas GetRut();
        void SetRut(Rutas rut);
        string toString();


};

#endif // VUELOS_H

