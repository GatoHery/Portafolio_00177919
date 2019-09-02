#include <iostream>

using namespace std;

int main()
{
    int numero[5][5]={0};
    
    cout<<"digite numero: "<<endl;
    cin>>numero[0][0];
    cout<<"digite numero: "<<endl;
    cin>>numero[0][1];
    cout<<"digite numero: "<<endl;
    cin>>numero[0][2];
    cout<<"digite numero: "<<endl;
    cin>>numero[0][3];
    cout<<"digite numero: "<<endl;
    cin>>numero[0][4];
    cout<<"digite numero: "<<endl;
    cin>>numero[1][1];
    cout<<"digite numero: "<<endl;
    cin>>numero[1][2];
    cout<<"digite numero: "<<endl;
    cin>>numero[1][3];
    cout<<"digite numero: "<<endl;
    cin>>numero[1][4];
    cout<<"digite numero: "<<endl;
    cin>>numero[2][2];
    cout<<"digite numero: "<<endl;
    cin>>numero[2][3];
    cout<<"digite numero: "<<endl;
    cin>>numero[2][4];
    cout<<"digite numero: "<<endl;
    cin>>numero[3][3];
    cout<<"digite numero: "<<endl;
    cin>>numero[3][4];
    cout<<"digite numero: "<<endl;
    cin>>numero[4][4];
    
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<numero[i][j]<<" ";
            
        }
        cout<<endl;
    }

    return 0;
}

