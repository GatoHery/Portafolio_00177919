#include <iostream>

using namespace std;

int multiRecursiva(int x, int y);

int main(void){
    int a=0;
    int b=0;

    cout<<"Ingrese los valores de a:"<<endl;
    cin>>a;
    cout<<"Ingrese los valores de b:"<<endl;
    cin>>b;

    cout<< a << " x " << b << " es igual a : " << multiRecursiva(a,b)<<endl;
}

int multiRecursiva(int a, int b){
    if(a==1){
        return 1;
    }
    else if(b>1){
        return a + multiRecursiva(a,b-1);
    }
}