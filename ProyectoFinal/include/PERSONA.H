#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include<sstream>
using namespace std;

class Persona
{
    private:
        string *nombre;
        string *id;

    public:
        Persona();
        Persona(string *nombre,string *id);
        virtual ~Persona();
        string GetNombre();
        void SetNombre(string *nombre);
        string GetId();
        void SetId(string *id);
        string toString();



};

#endif // PERSONA_H
