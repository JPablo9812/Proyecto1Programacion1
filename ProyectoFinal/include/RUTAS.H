#ifndef RUTAS_H
#define RUTAS_H
#include <iostream>
#include<sstream>

using namespace std;

class Rutas
{
public:
	Rutas();
	Rutas(string *nombreDelOrigen, string *nombreDelDestino, string *duracion, int *cantidadDeEscalas);
	virtual~Rutas();
	string GetNombreDelOrigen();
	void SetNombreDelOrigen(string *nombreDelOrigen);
	string GetNombreDelDestino();
	void SetNombreDelDestino(string *nombreDelDestino);
	string GetDuracion();
	void SetDuracion(string *duracion);
	int GetCantidadDeEscalas();
	void SetCantidadDeEscalas(int *cantidadDeEscalas);
	string toString();



private:
	string *nombreDelOrigen;
	string *nombreDelDestino;
	string *duracion;
	int *cantidadDeEscalas;
};


#endif // RUTAS_H




