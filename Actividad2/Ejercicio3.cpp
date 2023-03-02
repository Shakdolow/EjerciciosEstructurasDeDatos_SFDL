#include <iostream> 
#include <conio.h>
#include <string.h>
using namespace std; 

int main (void)
{
	int caracteres=0;
	char cadena [100];
	printf("Ingrese la cadena: ");
	gets(cadena);
	
	caracteres = strlen(cadena);
	cout<<"El numero de caracteres de la cadena es: "<<caracteres<<endl;
	
	getch();
	return 0;
}