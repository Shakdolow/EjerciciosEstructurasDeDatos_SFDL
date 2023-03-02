#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;
int main()
{
int numero, dato, i =0;
	srand(time(NULL));
	dato = 1 + rand()%(100);
	do{
		cout<<"Ponga un numero: "; cin>>numero;
		if (numero > dato){
			cout<<"\nPonga otro numero menor \n";
		}
		if (numero <dato){
			cout<<"\nPonga un numero mayor \n";
		}
		i++;
		}while (numero !=dato);
		cout<<"\nAdivinaste el numero\n";
		cout<<"Numero de intentos: "<<i<<endl;
		system("pause");
		 return 0;
	}