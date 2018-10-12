#ifndef AVION_H
#define AVION_H
#include<iostream>
#include<sstream>
using namespace std;

class Avion
{
private:
	string *id;
	int *anno;
	string *modelo;
	string *marca;
	int *cantidadDefilas;
	int *cantidadDeAsientosPorFila;



public:
	Avion();
	Avion(string *id,int *anno,string *modelo,string *marca,int *cantidadDefilas,int *cantidadDeAsientosPorFila);
	virtual ~Avion();
	string GetID();
	void SetID(string *id);
	int GetAnno();
	void SetAnno(int *anno);
	string GetModelo();
	void SetModelo(string *modelo);
	string GetMarca();
	void SetMarca(string *marca);
	int GetCantidadDefilas();
	void SetCantidadDefilas(int *cantidadDefilas);
	int GetCantidadDeAsientosPorFila();
	void SetCantidadDeAsientosPorFila(int *cantidadDeAsientosPorFila);
	string toString();




};

#endif // AVION_H
