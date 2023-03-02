#include <iostream>
#include <clocale>

using namespace std;

int main() 
{
	setlocale(LC_CTYPE,"Spanish");
    int n;
    
    cout << "Indica el tamaño de la lista: ";
    cin >> n;
    int lista[n];
    for (int i = 0; i < n; i++) 
	{
        cout << "Ingrese el numero " << i+1 << ": ";
        cin >> lista[i];
    }
    int* max = &lista[0]; 
    int* min = &lista[0];
    for (int i = 1; i < n; i++) 
	{ 
        if (lista[i] > *max) 
		{ 
        max = &lista[i]; 
        }
        if (lista[i] < *min) 
		{
        min = &lista[i]; 
        }
    }
    
    int &ValorMax=*max;
    int &ValorMin=*min;


    int x;
    cout << "El numero mayor de la lista es: " << ValorMax << endl; 
    cout << "El numero menor de la lista es: " << ValorMin << endl;
    cout <<"Ingresa otro numero"<<endl;
    
    cin>>x;
    
     if (x < ValorMax & x > ValorMin)
	 {
        cout<<"El numero que ingresaste esta entre el mayor y el menor numero de la lista"<<endl;
     }
	 else
	 {
        cout<<"El numero que ingresaste no se encuentra entre el mayor y el menor numero de la lista";
     }
    return 0;
}