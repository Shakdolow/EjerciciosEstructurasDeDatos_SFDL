#include<iostream>
using namespace std;
int main()
{
    int i,j,suma,matriz[3][3];
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            cout<< "Ingrese un numero: ";
            cin>> matriz[i][j];
        }
    }
    
    suma = 0;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            cout<< matriz[i][j] << "";
            if (i == j){
                suma = suma + matriz[i][j];
            }
        }
        cout<< endl;
	}
	
    cout<< "La suma de la diagonal principal es: "<<suma;
    return 0;
	}