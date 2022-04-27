#include <iostream>

using namespace std;

int main(){

    int cantAlumnos;
    float n1,n2,n3,promedio;
    
    cout<<"\tPromedio de Alunmos"<<endl;
    cout<<"Cantidad de alumnos: ";cin>>cantAlumnos;

    for(int i=0;i<cantAlumnos;i++){
        cout<<"\nAlumno "<<i+1<<":"<<endl;
        cout<<"Primera Nota: ";cin>>n1;
        cout<<"Segunda Nota: ";cin>>n2;
        cout<<"Tercera Nota: ";cin>>n3;
        promedio=(n1+n2+n3)/3;
        cout<<"Promedio: "<<promedio;
        cout<<endl;
    }    
    return 0;
}
/*  Alumno:Peter Smith Pacherres Muñoz
    CUI: 20213134   */