#include <iostream>

using namespace std;

int main() {
    int numero;
    cout<<"digite un numero"<<endl;
    cin>>numero;

    int resultado=0;
   for(int i=numero;i>0;i--){
       if(i == 0){

       }
       else{
           resultado += i;
       }
   }
   cout<<"resultado: "<<resultado<<endl;

    return 0;
}
