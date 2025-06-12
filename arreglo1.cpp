#include<iostream>
using namespace std;
int main(){
	int n,max,A[5];
    cout<<"Ingrese la cantidad de su arreglo: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"los datos del arreglo son los siguientes: ";
		cin>>A[i];
	}
	max=A[1];
	for(int i=1;i<n;i++){
		if (A[i]>max){
			max=A[i];
		}
	}
	cout<<"El numero maximo del arreglo es: "<< max <<endl;
	return 0;
}

