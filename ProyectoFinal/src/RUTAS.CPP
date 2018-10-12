#include "Rutas.h"
Rutas::Rutas()
{
	nombreDelOrigen=new string();
	nombreDelDestino=new string();
	duracion=new string();
	cantidadDeEscalas=new int;
}
Rutas::Rutas(string *nombreDelOrigen, string *nombreDelDestino, string *duracion, int *cantidadDeEscalas){
	this->nombreDelOrigen=nombreDelOrigen;
	this->nombreDelDestino=nombreDelDestino;
	this->duracion=duracion;
	this->cantidadDeEscalas=cantidadDeEscalas;
}
void Rutas::SetNombreDelOrigen(string *nombreDelOrigen){this->nombreDelOrigen=nombreDelOrigen;}
string Rutas::GetNombreDelOrigen(){return *nombreDelOrigen;}
void Rutas::SetNombreDelDestino(string *nombreDelDestino){this->nombreDelDestino=nombreDelDestino;}
string Rutas::GetNombreDelDestino(){return *nombreDelDestino;}
void Rutas::SetDuracion(string *duracion){this->duracion=duracion;}
string Rutas::GetDuracion(){return *duracion;}
void Rutas::SetCantidadDeEscalas(int *cantidadDeEscalas){this->cantidadDeEscalas=cantidadDeEscalas;}
int Rutas::GetCantidadDeEscalas(){return *cantidadDeEscalas;}

string Rutas::toString(){
stringstream s;
s<<"El origen del viaje es :"<<*nombreDelOrigen<<endl;
s<<"El destino del viaje es :"<<*nombreDelDestino<<endl;
s<<"La duracion del vuelo es :"<<*duracion<<" horas"<<endl;
s<<"La cantidad de escalas que tiene el vuelo son :"<<*cantidadDeEscalas<<endl;

return s.str();
}




Rutas::~Rutas(){

}
