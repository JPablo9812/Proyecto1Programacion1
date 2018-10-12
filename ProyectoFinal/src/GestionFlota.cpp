#include "GestionFlota.h"

GestionFlota::GestionFlota()
{
  cant=0;
  tam=30;

}
void GestionFlota::SetCant(int cant){cant=cant;}
int GestionFlota::GetCant(){return cant;}


void GestionFlota::LLenar_flota(Avion av){
if(cant<tam){
    Vflota[cant]=av;
    cant++;
}
else{
    cout<<"capacidad de flota maxima"<<endl;
}
}
void GestionFlota::Eliminar_av(int n){
    int a=n-1;
       string *id1=new string();
       int *anno1=new int;
       string *modelo1=new string();
       string *marca1=new string();
       int *fila1=new int;
       int *column1=new int;
       *id1=""; *anno1=0; *modelo1=""; *marca1=""; *fila1=0; *column1=0;
    Avion *avi=new Avion(id1,anno1,modelo1,marca1,fila1,column1);
        Vflota[a]=*avi;

}
void GestionFlota::Mostrar_avion(){
for(int i=0; i<cant;i++){
        cout<<"Avion "<<i+1<<endl;
        cout << Vflota[i].toString();
}
}




GestionFlota::~GestionFlota()
{
    //dtor
}
