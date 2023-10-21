#include <iostream>
using namespace std;
struct Nodo
{
	int dato;
	Nodo* siguinte;

};

// Funcion Agregar elementos a la lista
void agregarNodo(Nodo*& cabeza, int valor)
{
	Nodo* nuevoNodo = new Nodo; //creando el apuntador hacia el nuevo nodo
	nuevoNodo->dato = valor;
	nuevoNodo->siguinte = nullptr;

	if (cabeza == nullptr)
	{
		cabeza = nuevoNodo;
	}
	else
	{
		Nodo* actual = cabeza;
		while (actual->siguinte != nullptr)
		{
			actual = actual->siguinte;
		}
		actual->siguinte = nuevoNodo;
	}
}

void imprimirlista(Nodo* cabeza)
{
	Nodo* actual = cabeza;
	while (actual != nullptr)
	{
		cout << actual->dato << " ";
		actual = actual->siguinte;
	}
	cout << endl;
}

void borrarlista(Nodo* cabeza)
{
	while (cabeza != nullptr)
	{
		Nodo* siguiente = cabeza->siguinte;
		delete cabeza;
		cabeza = siguiente;
		cout << "Elemento borrado.";
	}
}

int main()
{
	Nodo* cabeza = nullptr; // Declaramos un puntero de memoria nulo
	int tamanoLista;
	cout << "Ingrese la cantidad de elementos que desea agregar a la lista: ";
	cin >> tamanoLista;

	if (tamanoLista <= 0)
	{
		cout << "Cantidad de elementos no valida." << endl;
		return 1;
	}

	for (int i = 0; i < tamanoLista; i++)
	{
		int valor;
		cout << "Ingrese dato " << i + 1 << ": ";
		cin >> valor;
		//invocar nuestra funcion de agregar nodo
		agregarNodo(cabeza, valor);

	}

	cout << "Imprimiendo lista de numeros" << endl;
	imprimirlista(cabeza);

	borrarlista(cabeza);

	return 0;
}