#include <iostream>
#include <string>

using namespace std;

void menu(){
    cout<<"\tMenu de Cumpleanios"<<endl;
    cout<<" 1. Agregar un Companiero"<<endl;
    cout<<" 2. Mostrar quienes cumplen anios este mes"<<endl;
    cout<<" 3. SALIR"<<endl;
    cout<<"Digite N OPCION: ";
}


int main(){
 
    struct fechaCumple
    {
        int dia;
        int mes;
        int anio;
    };
    const int n = 20;
    struct companieros
    {
        string nombre;
        struct fechaCumple compa_cumple;     
    }personas[n];


    int opcion;
    int cantidad=0;
    int avance=0;
    do
    {
        menu();  
        cin>> opcion;

        switch (opcion)
        {
            case 1:
                int dato;

                cout<< "Ingresar datos del Companiero: "<<endl; 
                cout<<"Nombre:";cin>>personas[avance].nombre;
                cout<<"FECHA DE NACIMIENTO"<<endl;
                cout<<"Dia: ";cin>>personas[avance].compa_cumple.dia;
                cout<<"Mes: ";cin>>personas[avance].compa_cumple.mes;
                cout<<"Anio: ";cin>>personas[avance].compa_cumple.anio;
                cin.ignore();
                avance+=1;
                break;
    
            case 2:
                int buscarMes=6; //<-Mes de JUNIO
                
                for(int i=0;i<n;i++){
                    if(buscarMes==personas[i].compa_cumple.mes){
                        //cout<<personas[i].compa_cumple.mes<<endl;
                        cantidad+=1;
                    }
                }
                cout<<"Cantidad de alumnos que cumplen este mes:"<<cantidad<<endl;

            break; 
      
        }

    } while (opcion!=3);
    
}
/*Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/
