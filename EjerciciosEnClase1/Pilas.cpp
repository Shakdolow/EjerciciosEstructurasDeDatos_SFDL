#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stack>

using namespace std;

int main()
{
    stack <int> pila;
    pila.push(1);
    pila.push(10);
    pila.push(4);
    
    
    cout<<""<<endl;
    cout<<"El tamaño de la pila es: "<<pila.size()<<endl;
    cout<<"El elemento de hasta arriba es: "<<pila.top()<<endl;
    
    pila.pop();
    cout<<"Eliminamos el numero 4 de la pila "<<endl;
	cout<<"El elemento de hasta arriba es: "<<pila.top()<<endl;
    
    return 0;
    
}
