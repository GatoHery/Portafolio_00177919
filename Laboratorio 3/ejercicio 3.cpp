#include <iostream>

using namespace std;

struct nodo{
    string titulo;
    int numPaginas;
    nodo *sig;
};

void menu(void);
void mostrarDatos(nodo *pInicio);

int main() {
    nodo *pInicio = NULL;
    nodo *nuevo = NULL;

    int opcion=0;

    do{
        menu();
        cin>>opcion;
        switch(opcion){
            case 1:
                nuevo = new nodo;
                cout<<"titulo: "<<endl;
                cin>>nuevo->titulo;
                cout<<"cantidad de paginas: "<<endl;
                cin>>nuevo->numPaginas;

                if(pInicio == NULL){
                    pInicio = nuevo;
                }
                else{
                    nuevo->sig = pInicio;
                    pInicio = nuevo;
                }

                break;
            case 2:
                mostrarDatos(pInicio);
                break;
            case 0:
                break;
        }
    }
    while(opcion !=0);


    return 0;
}

void menu(void){
    cout<<"Menu principal"<<endl;
    cout<<"1) agregar libro"<<endl;
    cout<<"2) revisar catalogo"<<endl;
    cout<<"0) salir"<<endl;
}

void mostrarDatos(nodo *pInicio){
    if(!pInicio){
        return;
    }
    else{
        cout<<"libro: "<<pInicio->titulo<<endl;
        cout<<"paginas: "<<pInicio->numPaginas<<endl;
        mostrarDatos(pInicio->sig);
    }
}