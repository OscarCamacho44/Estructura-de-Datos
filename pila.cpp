#include <iostream>
#include <vector>
#include <string>
//#include "pilalineal.h"
using namespace std;
int main() {
	const int capacidad=10;
	vector<int>elementos(capacidad);
	int cima=-1;
	cout<<"Digite elementos de la pila (termina con -1): ";
	cout<<"\n";
	int x=0;
	const int clave=-1;
	while(x!=clave){
		string entrada;
		cin>>entrada;
		try{
			x=stoi(entrada);//convertimos de cadena a entero(string to int)
			if(cima<capacidad-1){
				cima++;
				elementos[cima]=x;
			}
			else{
				cout<<"pila llena";
				cout"\n";
				break;
			}
		}
		catch(const invalid_argument&){
			cout<<"Entrada no valida";
			cout<<"\n";
		}
	}
	if(cima>=0){
		cout<<"Elementos de la pila: ";
		cout<<"\n";
		while(cima>=0){
			x=elementos[cima];
			cima--;
			cout<<x<<"";
			cout<<"\n";
		}
	}
	else{
		cout<<"pila vacía";
		cout<<"\n";
	}
	return 0;
}
