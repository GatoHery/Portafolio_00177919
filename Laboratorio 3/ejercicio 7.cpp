#include <iostream>

using namespace std;

struct nodo{
    int numero;
    nodo *sig;
};

void menu(void);
void mostrarDatos(nodo *pInicio);
void eliminarDatos(nodo *pInicio, int numero,int contador);

int main() {
    nodo *pInicio = NULL;
    nodo *nuevo = NULL;
    int numero=0;

    int opcion=0;

    do{
        menu();
        cin>>opcion;
        switch(opcion){
            case 1:
                nuevo = new nodo;
                cout<<"numero: "<<endl;
                cin>>nuevo->numero;

                if(pInicio == NULL){
                    pInicio = nuevo;
                    nuevo->sig=NULL;
                }
                else{
                    nuevo->sig = pInicio;
                    pInicio = nuevo;

                }

                break;
            case 2:
                mostrarDatos(pInicio);
                break;
            case 3:
                cout<<"numero a eliminar"<<endl;
                cin>>numero;
                eliminarDatos(pInicio,numero,0);
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
    cout<<"3) eliminar nodo"<<endl;
    cout<<"0) salir"<<endl;
}

void mostrarDatos(nodo *pInicio){
    if(!pInicio){
        return;
    }
    else{
        cout<<"numero: "<<pInicio->numero<<endl;
        mostrarDatos(pInicio->sig);
    }
}

void eliminarDatos(nodo *pInicio, int numero, int contador){
    if(!pInicio){
        return;
    }
    else{
        if(pInicio->sig != NULL ){
            if(numero == pInicio->sig->numero){
                pInicio->sig = pInicio->sig->sig;
            }


        }
        eliminarDatos(pInicio->sig,numero, contador+1);
    }
}