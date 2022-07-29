#include <iostream>

using namespace std;   

//---------Windows---------------------

class WinFactory {              //AbstractProductoA
public:
    virtual ~WinFactory(){};
    virtual string Draw() const = 0;
};

class WinButton : public WinFactory{    //--->CProdcuto A1
public:
    string Draw() const override {
        return "Dibujando Button Windows";
    }
};

class WinCheckBox : public WinFactory {  //--->CProdcuto A2
    string Draw() const override {
        return "Dibujando CheckBox Windows";
    }
};

//---------MAC------------------------

class MacFactory {                      //-->AbstractProductoB
public:
    virtual ~MacFactory(){};
    virtual string Draw() const = 0;
    virtual string draw(const WinFactory& colaborador) const = 0;
};

class MacButton : public MacFactory{    //--->CProductoB1
public:
    string Draw() const override {
        return "Dibujando Button Mac";
    }

    string draw(const WinFactory& colaborador) const override{
        const string result = colaborador.Draw();
        return "Dibujando Button con " + result;  
    }
};

class MacCheckBox : public MacFactory{  //--->CProductoB2
public:
    string Draw() const override{
        return "Dibujando CheckBox Mac";
    }

    string draw(const WinFactory& colaborador) const override {
        const string result = colaborador.Draw();
        return "Dibujando CheckBox con " + result;
    }
};

//---------Linux------------------------
    //Interfaz para linux
class LinuxFactory {                      
public:
    virtual ~LinuxFactory(){};
    virtual string Draw() const = 0;
    virtual string draw(const WinFactory& colaborador) const = 0;
};

class LinuxButton : public LinuxFactory{    //--->CProductoC1
public:
    string Draw() const override {
        return "Dibujando Button Linux";
    }

    string draw(const WinFactory& colaborador) const override{
        const string result = colaborador.Draw();
        return "Dibujando Button con " + result;
    }
};

class LinuxCheckBox : public LinuxFactory{  //--->CProductoC2
public:
    string Draw() const override{
        return "Dibujando CheckBox Linux";
    }

    string draw(const WinFactory& colaborador) const override {
        const string result = colaborador.Draw();
        return "Dibujando CheckBox con " + result;
    }
};

//---------GUI FACTORY------------------------

class GUIFactory{       //--->Abstract Factory
public:
    virtual WinFactory* CrearControlW() const = 0;
    virtual MacFactory* CrearControlM() const = 0;
    virtual LinuxFactory* CrearControlL() const = 0;
};

//---------Productos ------------------------

class Button : public GUIFactory{ //--->CFactory1
public:
    WinFactory* CrearControlW() const override {
        return new WinButton();
    }    
    MacFactory* CrearControlM() const override {
        return new MacButton();
    }
    LinuxFactory* CrearControlL() const override {
        return new LinuxButton();
    }
};

class CheckBox : public GUIFactory {  //--->CFactory2
public:
    WinFactory* CrearControlW() const override {
        return new WinCheckBox();
    }
    MacFactory* CrearControlM() const override {
        return new MacCheckBox();
    }
    LinuxFactory* CrearControlL() const override {
        return new LinuxCheckBox();
    }
};


void Application(const GUIFactory& f, int os){  //--->Cliente
    if(os==1){
        const WinFactory* producto_win = f.CrearControlW();
        cout<< producto_win->Draw()<<endl;
        delete producto_win;
    }
    else if(os==2){
        //const WinFactory* producto_win = f.CrearControlW();
        const MacFactory* producto_mac = f.CrearControlM();
        //cout<<producto_linux->draw(*producto_win)<<endl;
        cout<< producto_mac->Draw()<<endl;
        delete producto_mac;
        //delete producto_win;
    }
    else if(os==3){
        //const WinFactory* producto_win = f.CrearControlW();
        const LinuxFactory* producto_linux= f.CrearControlL();
        cout<< producto_linux->Draw()<<endl;
        //cout<<producto_linux->draw(*producto_win)<<endl;
        delete producto_linux;
        //delete producto_win;
    }
    else{ //En caso de Digitar un numero diferente para los OS
        cout<<"Error en Digitar el OS verificar y corregir"<<endl;
    }
}

int main(){ 

    std::cout << "Cliente: Windows\n";
    Button* f1 = new Button();
    Application(*f1, 1); // 1 - Windows
    delete f1;
    std::cout << std::endl;

    std::cout << "Cliente: Mac\n";
    Button* f2 = new Button();   
    Application(*f2, 2); // 2 - Mac
    delete f2;

    //Agregando el Cliente para uso LINUX
    cout<<"\nCliente: Linux"<<endl;
    Button* f3 = new Button();
    Application(*f3, 3); 
    delete f3;

    cout<<"\n-----CheckBox-----"<<endl;
    //Para el uso del CheckBox
    cout << "\nCliente: Windows\n";
    CheckBox* f1a = new CheckBox();
    Application(*f1a,1);
    delete f1a;

    cout << "\nCliente: Mac\n";
    CheckBox* f2a = new CheckBox();
    Application(*f2a,2);
    delete f2a;

    cout << "\nCliente: Linux\n";
    CheckBox* f3a = new CheckBox();
    Application(*f3a,3);
    delete f3a;

    return 0;
}

/*
Alumno: Peter Smith Pacherres Muñoz
CUI: 20213134
*/