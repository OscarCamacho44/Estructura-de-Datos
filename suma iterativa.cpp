#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int suma;
	int n=0;
	suma=0;
	cout<<"Ingrese un numero mayor de 10 para realizar la suma iterativa: ";cin>>n;
	cout<<"\n";
	while (n>0){
		suma+=n %10;
		n/=10;
		if(n>0){
		cout<<"El resultado es: "<<n;
		cout<<"\n";
	}
	else{
		cout<<"Operación exitosa.";
	}
	}
	return (suma+n);
	return 0;
}
