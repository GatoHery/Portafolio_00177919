#include <iostream>

using namespace std;

int main(){
    
    int real[2];
    int imaginario[2];
    
    for(int i=0;i<2;i++){
        real[i]=0;
        imaginario[i]=0;
    }
    
    for(int i=0;i<2;i++){    
    cout<<"digite numero real"<<endl;
    cin>>real[i];
    cout<<"digite numero imaginario"<<endl;
    cin>>imaginario[i];

    }
    int suma_real=0;
    int suma_imaginaria=0;
    
    for(int i=0;i<2;i++){    
        suma_real += real[i];
        suma_imaginaria += imaginario[i];
    }
    
    cout<<suma_real<<"+"<<suma_imaginaria<<"j"<<endl;
    
    return 0;
}

