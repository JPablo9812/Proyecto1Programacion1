#include "GestionVuelo.h"

GestionVuelo::GestionVuelo(Avion a, Rutas r)
{
   cant=0;
   tam=30;
}
void GestionVuelo::SetCant(int cant){cant=cant;}
int GestionVuelo::GetCant(){return cant;}


void GestionVuelo::LLenar_vuelo(Vuelo vu){
if(cant<tam){
    Vvuelo[cant]=vu;
    cant++;
}
else{
    cout<<"capacidad de vuelos maxima"<<endl;
}
}
void GestionVuelo::Eliminar_vu(int n){
    int a=n-1;
    string *fech= new string();
	string *salida = new string();
	string *llegada = new string();
	string *aSalida = new string();
	string *aLlegada = new string();
	string *pilot = new string();
	string *lista = new string();



	*fech=""; *salida=""; *llegada=""; *aLlegada=""; *aSalida=""; *aLlegada=""; *pilot=""; *lista="";
string *i=new string();
int *y=new int;
string *m=new string();
string *ma=new string();
int *f=new int;
int *c=new int;
*i=""; *y=0; *m=""; *ma=""; *f=0; *c=0;
string *o=new string();
string *d=new string();
string *du=new string();
int *e=new int;
*o=""; *d=""; *du="0"; *e=0;
	Avion *av1=new Avion(i,y,m,ma,f,c);
	Rutas *ru1=new Rutas(o,d,du,e);
	Vuelo *vue=new Vuelo(fech,salida,llegada,aSalida,aLlegada,pilot,lista,*av1,*ru1);
    Vvuelo[a]=*vue;
    }

void GestionVuelo::Mostrar_vuelo(){
for(int i=0; i<cant;i++){
        cout<<"Vuelos "<<i+1<<endl;
        cout << Vvuelo[i].toString();
}
}

GestionVuelo::~GestionVuelo()
{
    //dtor
}
