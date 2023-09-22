// Practica 2.cpp
#include<cstdlib>
#include<iostream>
#define maxf 3
#define maxc 5
using namespace std;
int main(int argc, char*argv[]) {
	float a[maxf][maxc];
	int f, c;
	//leer array
	for (f = 0; f < maxf; f++) {
		for (c = 0; c < maxc; c++) {
			cout << "introduzca un numero: ";
			cin >> a[f][c];
		}
	}
	//escribir array
	for (f = 0; f < maxf; f++) {
		for (c = 0; c < maxc; c++) {
			cout << "|" << a[f][c] << "|";
			
		}
		cout << "\n";
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}