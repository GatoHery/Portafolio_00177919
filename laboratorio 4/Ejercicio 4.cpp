#include <iostream>

using namespace std;

struct nodo{
    int numero;
    nodo *sig;
};

void Menu();
void MostrarLibros(nodo *lista);
void SumarPares(nodo *lista,int suma);
void SumarImpares(nodo *lista,int suma);

int main() {
    nodo *pInicio = NULL;
    nodo *nuevo = NULL;
    nodo *aux = NULL;

    int opcion=0;

    do{
        Menu();
        cin>>opcion;

        switch(opcion){
            case 1:
                nuevo = new nodo;
                cout<<"digite numero: "<<endl;
                cin>>nuevo->numero;
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
                SumarPares(pInicio,0);
                break;
            case 4:
                SumarImpares(pInicio,0);
                break;
            case 5:

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
    cout << "3. sumar pares." << endl;
    cout << "4. sumar impares " << endl;
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

void SumarPares(nodo *lista,int suma){
    if (!lista)
        cout<<"valor total: "<<suma<<endl;
    else {
        if(lista->numero % 2 == 0){
        suma += lista->numero;
        }
        SumarPares(lista->sig,suma);
    }
}

void SumarImpares(nodo *lista, int suma) {
    if (!lista)
        cout << "valor total: " << suma << endl;
    else {
        if (lista->numero % 2 != 0) {
                suma += lista->numero;

        }
        SumarImpares(lista->sig, suma);
    }
}