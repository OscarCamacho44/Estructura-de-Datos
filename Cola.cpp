#include <iostream>
#define MaxTamC 10
typedef int TipoDato;
using namespace std;
int main(){
	int frente =0,final=0;
	TipoDato A[MaxTamC];
	int contador=0;
	//Iniciar cola
	frente=0;
	final=0;
	cout<<"Desea agregar elementos a la cola? (S/N): ";
	char R;
	cin>>R;
	while((R=='s'||R=='S')&&contador<10){
		if((final+1)%MaxTamC==frente){
			cout<<"Desbordamiento de la cola";
			return 1;
		}
		cout<<"Ingrese un elemento para la cola: ";
		TipoDato elemento;
		cin>>elemento;
		final =(final+1)%MaxTamC;
		A[final]=elemento;
		contador++;
		cout<<"Elemento"<<contador<<"Agredado a la cola: "<<elemento;
		if(contador<10){
			cout<<"Desea agregar mas elementos a la cola? (S/N): ";
			cin>>R;
		}
	}
	//Validar si la cola está vacía
	if(frente ==final){
		cout<<"La cola esta vacia.";
		return 1;
	}
	//obtenero el primer elemento de la cola
	TipoDato primerElemento=A[(frente+1)%MaxTamC];
	cout<<"El primer elemento de la cola es: "<<primerElemento;
	//eliminar un elemento de la cola
	frente=(frente+1)%MaxTamC;
	//imprimir elementos de la cola en el orden en que fueron ingresados
	cout<<"Elementos de la cola en el orden de ingreso: ";
	for(int i=frente+1; i<=final; i=(i+1)%MaxTamC){
		cout<<A[i]<<"";
	}
	return 0;
}
