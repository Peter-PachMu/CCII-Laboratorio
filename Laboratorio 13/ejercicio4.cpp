#include <iostream>
#include <string>
using namespace std;

struct Persona{
	string nombre;
	char sexo;
};

struct sueldo{
	float dinero;
	struct Persona empleado;

}personal;

void menu(){
    cout<<"\n   Menu"<<endl;
    cout<<"1. Ingresar Personal"<<endl;
    cout<<"2. SALIR"<<endl;
    cout<<"Digite N OPCION: ";
}

int main(){

    float smenor,smayor;
    cout<<"\tRegistro de Personal"<<endl;
    cout<<"Nombre: "; cin>>personal.empleado.nombre;
    cout<<"Sexo <M/F>: "; cin>>personal.empleado.sexo;
    cout<<"Sueldo: ";cin>>personal.dinero;
	smenor=personal.dinero;
    smayor=personal.dinero;

	int opcion;
	do
    {
        menu();  
        cin>> opcion;

        switch (opcion)
        {
            case 1:
                fflush(stdin);
                cout<<"Nombre: "; cin>>personal.empleado.nombre;
                cout<<"Sexo <M/F>: "; cin>>personal.empleado.sexo;
                cout<<"Sueldo: ";cin>>personal.dinero;
                if(smayor<personal.dinero){
                    smayor=personal.dinero;
                }
                else if (smenor>personal.dinero)
                {
                    smenor=personal.dinero;
                }
            break;
        }

    } while (opcion!=2);

    cout<<"Sueldo Menor"<<endl;
	cout<<smenor<<endl;	

    cout<<"Sueldo Mayor"<<endl;
	cout<<smayor<<endl;

	cout<<"Saliendo del programa ... "<<endl; 	
}
/*Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/
