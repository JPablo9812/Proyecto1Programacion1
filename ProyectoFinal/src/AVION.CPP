#include "Avion.h"

Avion::Avion()
{
	id=new string();
	anno=new int;
	modelo=new string();
	marca=new string();
	cantidadDefilas=new int;
	cantidadDeAsientosPorFila=new int;

}
Avion::Avion(string *id,int *anno,string *modelo,string *marca,int *cantidadDefilas,int *cantidadDeAsientosPorFila)
{
	this->id=id;
	this->anno=anno;
	this->modelo=modelo;
	this->marca=marca;
	this->cantidadDefilas=cantidadDefilas;
	this->cantidadDeAsientosPorFila=cantidadDeAsientosPorFila;


}
void Avion::SetID(string *id){this->id=id;}
string Avion::GetID(){return *id;}
void Avion::SetAnno(int *anno){this->anno=anno;}
int Avion::GetAnno(){return *anno;}
void Avion::SetModelo(string *modelo){this->modelo=modelo;}
string Avion::GetModelo(){return *modelo;}
void Avion::SetMarca(string *marca){this->marca=marca;}
string Avion::GetMarca(){return *marca;}
void Avion::SetCantidadDefilas(int *cantidadDefilas){this->cantidadDefilas=cantidadDefilas;}
int Avion::GetCantidadDefilas(){return *cantidadDefilas;}
void Avion::SetCantidadDeAsientosPorFila(int *cantidadDeAsientosPorFila){this->cantidadDeAsientosPorFila=cantidadDeAsientosPorFila;}
int Avion::GetCantidadDeAsientosPorFila(){return *cantidadDeAsientosPorFila;}


string Avion::toString(){
stringstream s;
s<<"El Id del avion es: "<<*id<<endl;
s<<"El anno del avion es: "<<*anno<<endl;
s<<"El modelo del avion es: "<<*modelo<<endl;
s<<"La marca del avion es: "<<*marca<<endl;
s<<"la cantidad de pasajeros del avion es de: "<<*cantidadDefilas * *cantidadDeAsientosPorFila<<endl;
s<<"Tamanno: ";
if(*cantidadDefilas * *cantidadDeAsientosPorFila>=180){
    s<<"grande"<<endl;
}
else{
    s<<"pequeno"<<endl;
}
s<<"La cantidad de fila del avion es de: "<<*cantidadDefilas<<endl;
s<<"La cantidad de columnas del avion es de: "<<*cantidadDeAsientosPorFila<<endl;
return s.str();
}
Avion::~Avion(){

}
