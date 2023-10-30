#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n,n1,b,b1;
	cout<<"Digite el limite de la tabla: ";cin>>b;
	cout<<"\n";
	cout<<"Digite el numero de la tabla de multiplicar: ";cin>>n;
	cout<<"\n";
	b1=b/b;
	while(b>1){
		n1=n*b1;
		b1+=1;
		b-=1;
	cout<<n<<" * "<<b1<<" = "<<n1;
	cout<<"\n";
	}
	system("PAUSE");	
	return 0;
}
