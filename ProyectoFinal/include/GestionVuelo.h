#ifndef GESTIONVUELO_H
#define GESTIONVUELO_H
#include <iostream>
#include"Vuelo.h"
#include<iostream>
#include<sstream>
using namespace std;



class GestionVuelo
{
    private:

        int cant;
        int tam;

    public:
        GestionVuelo(Avion a, Rutas r);
        virtual ~GestionVuelo();
        void SetCant(int cant);
	    int GetCant();
	    void LLenar_vuelo(Vuelo vu);
	    void Eliminar_vu(int a);
        void Anadir_vu(Vuelo vu);
        void Mostrar_vuelo();
        Vuelo Vvuelo[30];



};

#endif // GESTIONVUELO_H
