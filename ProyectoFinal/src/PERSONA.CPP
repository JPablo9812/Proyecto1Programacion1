#include "Persona.h"

Persona::Persona()
{
    nombre=new string();
    id=new string();
}
Persona::Persona(string *nombre,string *id){
this->nombre=nombre;
this->id=id;
}
string Persona::GetNombre(){return *nombre;}
void Persona::SetNombre(string *nombre){this->nombre=nombre;}
string Persona::GetId(){return *id;}
void Persona::SetId(string *id){this->id=id;}

string Persona::toString(){
stringstream s;
s<<"Su nombre es: "<<*nombre<<endl;
s<<"Su ID es: "<<*id<<endl;

return s.str();

}
Persona::~Persona()
{
    //dtor
}
