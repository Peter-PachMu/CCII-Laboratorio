#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct fisico{
    int edad;
	float talla;
};
const int n=10; //Cantidad de jugadores -> 10
struct jugador{
    string nombre;
    struct fisico datos;
}postulante[n];

int main(){

    vector<string> seleccionados;
    
    for(int i=0; i<n;i++){
        fflush(stdin);
        cout<<"\tJUGADOR "<<i+1<<endl;
        cout<<"Nombre: ";cin>>postulante[i].nombre;
        cout<<"Edad: ";cin>>postulante[i].datos.edad;
        cout<<"Talla: ";cin>>postulante[i].datos.talla;

        if((postulante[i].datos.edad<20) && (postulante[i].datos.talla>1.70)){
            seleccionados.push_back(postulante[i].nombre);       
        }
    }	

    cout<<"Y los Seleccionados son: "<<endl;
    for(int i=0;i<seleccionados.size();i++){
        cout<<i+1<<".- "<<seleccionados[i]<<endl;
    }
    return 0;
}
/*Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/
