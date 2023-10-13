#include <iostream>
#include <vector>
using namespace std;
int main() {
	//Declara un vector de cadenas
	vector<string>aves={"Loro Gris","Paloma de Diamante","Coctel"};
	cout<<"Los valores del vector antes de insertar: ";
	cout<<"\n";
	//itera sobre el vector para imprimir los valores
	for(int i=0;i<aves.size();i++){
		cout<<aves[i]<<"";
	}
	cout<<"\n";
	//Agrega tres valores al final del vector utilizando push_back()
	aves.push_back("Mayna");
	aves.push_back("Periquitos");
	aves.push_back("Cacatúa");
	cout<<"Los valores del vector después de insertar: ";
	cout<<"\n";
	//itera sobre el vector para imprimir los valores
	for(int i=0;i<aves.size();i++){
		cout<<aves[i]<<"";
	}
	cout<<"\n";
	system("PAUSE");
	return 0;
}
