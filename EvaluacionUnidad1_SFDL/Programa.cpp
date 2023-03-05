#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main()
{
setlocale(LC_ALL, "");
int numero, dato, minimo, maximo, contador = 0;

cout<<"Juega a adivinar el numero!, tendrás 5 intentos para adivinarlo, comencemos!"<<endl;

cout<<"Indica el rango mínimo: "; cin>>minimo;
cout<<"Indica el rango máximo: "; cin>>maximo;	




	srand(time(NULL));
	dato = rand() % maximo + minimo;
	
	
	do{
		if (contador == 5){
			cout<<"Perdiste!, se acabaron tus intentos, el numero secreto era: "<<dato;
			abort();
		}
			
			cout<<"Introduce un numero: "; cin>>numero;	
		
		
		if (numero > dato){
			cout<<"\nSigue intentando, el numero secreto es menor \n";
		}
		
		if (numero <dato){
			cout<<"\nSigue intentando, el numero secreto es mayor \n";
		}
		
		contador++;
		
		}while (numero !=dato);
		cout<<"\nFelicidades!, Adivinaste el numero\n";
		cout<<"Tu numero de intentos: "<<contador<<endl;
		system("pause");
		 return 0;
	}
	
