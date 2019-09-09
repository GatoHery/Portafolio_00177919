#include <iostream>

using namespace std;

float funcionRecursiva(int n,float r);

int main() {
    int n=0;
    float r=1;

    raiz:
    cout<<"digite la raiz a bucar"<<endl;
    cin>>n;
    if(n > 0){

        cout<<"resultado: "<<funcionRecursiva(n,r)<<endl;
    }
    else{
        cout<<"raiz invalida"<<endl;
        goto raiz;
    }

    return 0;
}

float funcionRecursiva(int n,float r){

    float r1 = ((n/r) + (r)) / 2;
    if(abs(r1 - r) < 0.0001){
        return r;
    }
    else if(r1 < 0){
        return r1;
    }
    else{
        return funcionRecursiva(n,r1);
    }

}