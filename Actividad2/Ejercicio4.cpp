#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo *siguiente;
};

void insertarlista(Nodo *&, int);
void mostrarlista(Nodo *);
void calcularMM(Nodo *);

int main(){
	Nodo *lista= NULL;
	int dato; 
	char respuesta;
	do{
		cout<<"Introduce un numero: ";
		cin>>dato;
		insertarlista(lista, dato);
		
		cout<<"¿Desea introducir otro numero? (s/n) ";
		cin>>respuesta;
	}while (respuesta == 's' || respuesta == 'S');
	
	cout<<"\nElementos de la lista: \n";
	mostrarlista(lista);
	
	calcularMM(lista);
	return 0;
}

void insertarlista (Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo-> dato = n;
	nuevo_nodo-> siguiente = NULL;
	if (lista == NULL){
		lista = nuevo_nodo;
	}
	else {
		aux = lista; 
		while (aux -> siguiente != NULL){
			aux = aux -> siguiente;
		}
		aux -> siguiente = nuevo_nodo;
	}
	cout<<"\tElemento "<<n<<" agregado a lista correctamente\n";
}

void mostrarlista(Nodo *lista){
	while(lista != NULL){
		cout<<lista->dato<<"->";
		lista = lista->siguiente;
	}
}

void calcularMM(Nodo *lista){
	int mayor =0, menor=99999;
	while (lista !=NULL){
		if ((lista ->dato)>mayor){
			mayor = lista->dato;
		}
		if ((lista ->dato)< menor){
			menor = lista->dato;
		}
		lista = lista ->siguiente;
	}
	cout<<"\nEl mayor elemento es: "<<mayor<<endl;
	cout<<"\nEl menor elemento es: "<<menor<<endl;
}