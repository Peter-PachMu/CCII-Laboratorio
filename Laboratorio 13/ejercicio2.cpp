#include <iostream>
#include <string>

using namespace std;

void menu(){
    cout<<"\tPromedio de CC II"<<endl;
    cout<<"1. Ingresar Alumno"<<endl;
    cout<<"2. SALIR"<<endl;
    cout<<"Digite N OPCION: ";
}

struct Promedio{
	float fase1;//15%
	float fase2;//20%
	float fase3;//25%
	float proyectoFinal;//40%
};

struct Alumno{
	string nombre;
	char grupo;
	
	struct Promedio notas;
}estudiante;


int main(){

	float promedio;
	int opcion;
	 do
    {
        menu();  
        cin>> opcion;

        switch (opcion)
        {
            case 1:
                int dato;

				cout<<"Nombre: ";cin>>estudiante.nombre;
				cout<<"Grupo: ";cin>>estudiante.grupo;
				
				cout<<"\tIngrese notas del Alumno:"<<endl;
				cout<<"1 Fase: "; cin>>estudiante.notas.fase1;
				cout<<"2 Fase: "; cin>>estudiante.notas.fase2;
				cout<<"3 Fase: "; cin>>estudiante.notas.fase3;
				cout<<"Proyecto F: "; cin>>estudiante.notas.proyectoFinal;
				
				promedio=((estudiante.notas.fase1*0.15)+(estudiante.notas.fase2*0.2)+(estudiante.notas.fase3*0.25)+(estudiante.notas.fase1*0.4));
				
				cout<<"\nResultado"<<endl;
				cout<<"Nombre: "<<estudiante.nombre<<endl;
				cout<<"Grupo: "<<estudiante.grupo<<endl;
				
				cout<<"Promedio: "<<promedio<<endl;

				if(promedio>=10.5){
					cout<<"\tEl estudiante APROBO el curso"<<endl;
				}
				else{
					cout<<"\tEl estudiante NO APROBO el curso"<<endl;
				}
			cout<<endl;
            break;
      
        }

    } while (opcion!=2);
	cout<<"Saliendo del programa ... "<<endl; 	
}
/*Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/