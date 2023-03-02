#include <iostream>
#define M 3
using namespace std; 
int main()
{
	int i, numeros[M];
	float  suma = 0,promedio = 0;
	char respuesta;
	do{
	
	for (i = 0; i < M; i++){ 
		cout<< "Ingrese las calificaciones del alumno: ";
		cin>> numeros[i];
}
	for (i = 0; i < M; i++){ 
		cout<< numeros[i] <<endl;
		suma = suma + numeros[i];
}
	promedio = suma/3;
	cout<< "El promedio del alumno es de: "<<promedio;
	
	cout<<"\t¿Quiere poner otras calificaciones?(s/n) ";
		cin>>respuesta;
	}while (respuesta == 's' || respuesta == 'S');
}