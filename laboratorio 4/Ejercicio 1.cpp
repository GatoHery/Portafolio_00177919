#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

struct nodo{
    int numero;
    nodo *sig;
};

void Menu();
void MostrarLibros(nodo *lista);
void MostrarPares(nodo *lista);
void MostrarImpares(nodo *lista);
void mostarInvertido(nodo *lista);

int main() {
    nodo *pInicio = NULL;
    nodo *nuevo = NULL;
    nodo *aux = NULL;
    nodo *aux2 = NULL;

    int opcion=0;
    srand(time(NULL));
    int aleatorio=0;

    do{
        Menu();
        cin>>opcion;

        switch(opcion){
            case 1:
                nuevo = new nodo;
                aleatorio = (rand()%100) + 1;
                nuevo->numero = aleatorio;
                nuevo->sig = NULL;
                if(!pInicio){
                    pInicio = nuevo;
                }
                else{
                    aux = pInicio;
                    while(aux->sig != NULL){
                        aux = aux->sig;
                    }
                    aux->sig = nuevo;
                }

                break;
            case 2:
                MostrarLibros(pInicio);
                break;
            case 3:
                MostrarPares(pInicio);
                break;
            case 4:
                MostrarImpares(pInicio);
                break;
            case 5:
                mostarInvertido(pInicio);
                break;
        }


    }
    while(opcion !=0);
    return 0;
}
void Menu() {
    cout << "MENU PRINCIPAL" << endl;
    cout << "1. Agregar dato." << endl;
    cout << "2. Mostrar datos." << endl;
    cout << "3. mostrar pares." << endl;
    cout << "4. mostrar impares " << endl;
    cout << "5. mostrar inversa"<<endl;
    cout << "0. Salir \nSu opcion: ";
}

void MostrarLibros(nodo* lista) {
    if (!lista)
        return;
    else {
        cout<<"numero: "<<lista->numero<<endl;
        MostrarLibros(lista->sig);
    }
}

void MostrarPares(nodo *lista){
    if (!lista)
        return;
    else {
        if(lista->numero % 2 == 0){
            cout<<"numero: "<<lista->numero<<endl;
        }
        MostrarPares(lista->sig);
    }
}

void MostrarImpares(nodo *lista){
    if (!lista)
        return;
    else {
        if(lista->numero % 2 != 0){
            cout<<"numero: "<<lista->numero<<endl;
        }
        MostrarImpares(lista->sig);
    }
}

void mostarInvertido(nodo *lista){
    if(!lista){
        return;
    }
    else{
        mostarInvertido(lista->sig);
        cout<<"numero: "<<lista->numero<<endl;
    }
}