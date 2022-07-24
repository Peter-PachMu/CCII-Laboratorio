#include "iostream"
#include "vector"

using namespace std;

class Producto {
public:
    vector<string> componentes;
    void ListaComp()const {
    cout << "Ficha tecnica:\n ";
        for (size_t i = 0; i < componentes.size(); i++) {
            if (componentes[i] == componentes.back()) {
                cout << componentes[i]<<".";
            }
            else {
                cout << componentes[i] << ".\n ";
            }
        }
    cout << "\n\n";
    }
};

// Interfaz de Builder 
class IBuilder {
    public:
    virtual ~IBuilder() {}
    virtual void CantidadPuertas(string n) const = 0;
    virtual void AroNeumaticos(string n) const = 0;
    virtual void ModelodeCaja(string n) const = 0;
    virtual void CarroceriaColor(string n) const = 0;
    virtual void NumeroAsientos(string n) const = 0;
    virtual void Combustible(string n) const = 0;
    virtual void Vidrios(string n) const = 0;
};

//BuilderEspecifico 
class BuilderEspecifico : public IBuilder {
private:
    Producto* product;
public:
    BuilderEspecifico() {
    this->Reset();
    }
    ~BuilderEspecifico() {
    delete product;
    }
    void Reset() {
    this->product = new Producto();
    }

    void CantidadPuertas(string n) const override{
        this->product->componentes.push_back("Cantidad de Puertas:\t" + n);
    }
    void AroNeumaticos(string n) const override{
        this->product->componentes.push_back("Tamanio del Aro:\t" + n);
    }
    void ModelodeCaja(string n) const override{
        this->product->componentes.push_back("Tipo de caja:\t\t" + n);
    }
    void CarroceriaColor(string n) const override{
        this->product->componentes.push_back("Color del auto:\t" + n);
    }
    void NumeroAsientos(string n) const override{
        this->product->componentes.push_back("N de Asientos:\t\t" + n);
    }
    void Combustible(string n) const override{
        this->product->componentes.push_back("Tipo de Combustible:\t" + n);
    }
    void Vidrios(string n) const override{
        this->product->componentes.push_back("Tipo de Vidrio:\t" + n);
    }
    Producto* GetProducto() {
    Producto* resultado = this->product;
    this->Reset();
    return resultado;
    }
};

class Director {  //-> responsable de ejecutar los pasos de construcción 
private:
    IBuilder* builder;
public:
    void set_builder(IBuilder* builder) {
        this->builder = builder;
    }
    void BuildDeFabrica() { //->Construccion con materiales pretederminados
        this->builder->CantidadPuertas("4");
        this->builder->AroNeumaticos("17");
        this->builder->ModelodeCaja("Mecanico");
        this->builder->CarroceriaColor("Negro");
        this->builder->NumeroAsientos("5");
        this->builder->Combustible("Petroleo");
    }

    void AutoDeportivoModerno() { 
        this->builder->CantidadPuertas("2");
        this->builder->AroNeumaticos("15");
        this->builder->ModelodeCaja("Automatico");
        this->builder->CarroceriaColor("Rojo");
        this->builder->NumeroAsientos("2");
        this->builder->Combustible("Electrico");
    }
};

void Cliente(Director& director)
{
    BuilderEspecifico* builder = new BuilderEspecifico();
    director.set_builder(builder);

    cout << "Producto de Fabrica:\n";
    director.BuildDeFabrica();
    Producto* p = builder->GetProducto();
    p->ListaComp();
    delete p;

    cout << "Auto Deportivo Moderno:\n";
    director.AutoDeportivoModerno();
    p = builder->GetProducto();
    p->ListaComp();
    delete p;

    cout << "\t\tAuto Personalizado:\n";
    cout << "!!Cambios realizados por el Cliente al Producto de Fabrica!!\n";
    builder->CantidadPuertas("6");
    builder->ModelodeCaja("Automatico");
    builder->CarroceriaColor("Verde Militar");
    builder->Vidrios("Polarizado");
    builder->Combustible("GNV");
    p = builder->GetProducto();
    p->ListaComp();
    delete p;

    delete builder;
}


int main() {
    Director* director = new Director();
    Cliente(*director);
    delete director;
    return 0;
}

/*
Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/