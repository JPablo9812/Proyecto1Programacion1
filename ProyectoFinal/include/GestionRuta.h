#ifndef GESTIONRUTA_H
#define GESTIONRUTA_H
#include <iostream>
#include"Rutas.h"
#include<iostream>
#include<sstream>
using namespace std;



class GestionRuta
{
    private:

        int cant;
        int tam;



    public:
        GestionRuta();
        virtual ~GestionRuta();
        void SetCant(int cant);
	    int GetCant();
	    void LLenar_ruta(Rutas ru);
	    void Eliminar_ru(int a);
        void Anadir_ru(Rutas ru);
        void Mostrar_rutas();
        Rutas Vrutas[30];


};

#endif // GESTIONRUTA_H
