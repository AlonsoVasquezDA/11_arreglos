#include<iostream>
using namespace std;
int main() {
    int n,a[10],aux;
    cout<<"Ingrese la cantidad de numeros en el arreglo: "<<endl;
    cin>>n;
    for (int i=0 ; i<n ; i++ ){
    	cout<<"Ingrese un numero. ";
        cin>>a[i];
    }
    for (int i=0 ; i<(n/2) ; i++ ){
        aux=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=aux;
    }
    cout<<endl;
    for (int i=0 ;i<n ; i++ ){
        cout<<a[i]<<endl;
    
    }
    return 0;
}
