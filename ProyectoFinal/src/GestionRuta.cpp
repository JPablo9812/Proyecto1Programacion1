#include "GestionRuta.h"

GestionRuta::GestionRuta()
{
    cant=0;
    tam=30;


}
void GestionRuta::SetCant(int cant){cant=cant;}
int GestionRuta::GetCant(){return cant;}

void GestionRuta::LLenar_ruta(Rutas ru){
if(cant<tam){
    Vrutas[cant]=ru;
    cant++;
}
else{
    cout<<"capacidad de rutas maxima"<<endl;
}
}
void GestionRuta::Eliminar_ru(int n){
    int a=n-1;
string *orgien1=new string();
string *destin1=new string();
string *dur1=new string();
int *escala1=new int;
*orgien1=""; *destin1=""; *dur1="0"; *escala1=0;
Rutas *ruvi=new Rutas(orgien1,destin1,dur1,escala1);
    Vrutas[a]=*ruvi;

}
void GestionRuta::Mostrar_rutas(){
for(int i=0; i<cant;i++){
        cout<<"Rutas "<<i+1<<endl;
        cout << Vrutas[i].toString();
}
}

GestionRuta::~GestionRuta()
{
    //dtor
}
