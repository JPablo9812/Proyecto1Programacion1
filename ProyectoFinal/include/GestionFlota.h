#ifndef GESTIONFLOTA_H
#define GESTIONFLOTA_H
#include <iostream>
#include"Avion.h"
#include<iostream>
#include<sstream>
using namespace std;


class GestionFlota
{
    private:

        int cant;
        int tam;

    public:
        GestionFlota();
        virtual ~GestionFlota();
        void SetCant(int cant);
	    int GetCant();
	    void LLenar_flota(Avion av);
	    void Eliminar_av(int a);
        void Anadir_av(Avion av);
        void Mostrar_avion();
        Avion Vflota[30];







};

#endif // GESTIONFLOTA_H
