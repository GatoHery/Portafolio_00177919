#include <iostream>

using namespace std;

int main()
{
    int numero[10];
    
    for(int i=0;i<10;i++){
    cout<<"digite numero["<<i+1<<"]"<<endl;
    cin>>numero[i];
        
    }
    int sumatoria =0;
    float promedio =0;
    
    for(int i=0;i<10;i++){
    sumatoria += numero[i];
        
    }
    promedio = sumatoria/10;
    cout<<"sumatoria: "<<sumatoria<<endl;
    cout<<"promedio: "<<promedio<<endl;

    return 0;
}

