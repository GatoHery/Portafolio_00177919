#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout<<"digite numero:"<<endl;
    cin>>numero;

while(numero>0){
    cout<<numero%10<<endl;
    numero /= 10;
    
}

    return 0;
}

