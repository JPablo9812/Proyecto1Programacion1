#include "Vuelo.h"
#include"Avion.h"
#include "Rutas.h"

Vuelo::Vuelo()
{

	fecha= new string();
	horaDeSalida = new string();
	horaDeLlegada = new string();
	nombreAeropuertoSalida = new string();
	nombreAeropuertoLlegada = new string();
	nombreDelPiloto = new string();
	listaDePasajeros = new string();
}
Vuelo::Vuelo(string *fecha,string *horaDeSalida, string *horaDeLlegada, string *nombreAeropuertoSalida,string *nombreAeropuertoLlegada, string *nombreDelPiloto, string *listaDePasajeros, Avion avi1, Rutas rut1)
{

	this->fecha=fecha;
	this->horaDeSalida=horaDeSalida;
	this->horaDeLlegada=horaDeLlegada;
	this->nombreAeropuertoSalida=nombreAeropuertoSalida;
	this->nombreAeropuertoLlegada=nombreAeropuertoLlegada;
	this->nombreDelPiloto=nombreDelPiloto;
	this->listaDePasajeros=listaDePasajeros;
	avi=avi1;
	rut=rut1;
}


void Vuelo::SetFecha(string *fecha)
{
    this->fecha=fecha;
}
string Vuelo::GetFecha()
{
    return *fecha;
}
void Vuelo::SetHoraDeSalida(string *horaDeSalida)
{
    this->horaDeSalida=horaDeSalida;
}
string Vuelo::GetHoraDeSalida()
{
    return *horaDeSalida;
}
void Vuelo::SetHoraDeLlegada(string *horaDeLlegada)
{
    this->horaDeLlegada=horaDeLlegada;
}
string Vuelo::GetHoraDeLlegada()
{
    return *horaDeLlegada;
}
void Vuelo::SetNombreAeropuertoSalida(string *nombreAeropuertoSalida)
{
    this->nombreAeropuertoSalida=nombreAeropuertoSalida;
}
string Vuelo::GetNombreAeropuertoSalida()
{
    return *nombreAeropuertoSalida;
}
void Vuelo::SetNombreAeropuertoLlegada(string *nombreAeropuertoLlegada)
{
    this->nombreAeropuertoLlegada=nombreAeropuertoLlegada;
}
string Vuelo::GetNombreAeropuertoLlegada()
{
    return *nombreAeropuertoLlegada;
}
void Vuelo::SetNombreDelPiloto(string *nombreDelPiloto)
{
    this->nombreDelPiloto=nombreDelPiloto;
}
string Vuelo::GetNombreDelPiloto()
{
    return *nombreDelPiloto;
}
void Vuelo::SetListaDePasajeros(string *listaDePasajeros)
{
    this->listaDePasajeros=listaDePasajeros;
}
string Vuelo::GetListaDePasajeros()
{
    return *listaDePasajeros;
}
void Vuelo::SetAvi(Avion avi1)
{
    avi=avi1;
}
Avion Vuelo::GetAvi()
{
    return (avi);
}
void Vuelo::SetRut(Rutas rut1)
{
    rut=rut1;
}
Rutas Vuelo::GetRut()
{
    return (rut);
}
string Vuelo::toString(){
stringstream s;
s<<"La fecha de salida del avion es: "<<*fecha<<endl;
s<<"La hora de salida del avion es: "<<*horaDeSalida<<endl;
s<<"La hora de llegada del avion es: "<<*horaDeLlegada<<endl;
s<<"El nombre del aeropuerto de salida es: "<<*nombreAeropuertoSalida<<endl;
s<<"El nombre del aeropuerto de llegada es: "<<*nombreAeropuertoLlegada<<endl;
s<<"El nombre del piloto es: "<<*nombreDelPiloto<<endl;
s<<"La lista de pasajeros es: "<<*listaDePasajeros<<endl;
s<<"El avion asignado es: "<<avi.GetID()<<endl;
s<<"La ruta asignada es : "<<rut.GetNombreDelOrigen()<<" - "<<rut.GetNombreDelDestino()<<endl;
return s.str();
}
Vuelo::~Vuelo()
{

}

