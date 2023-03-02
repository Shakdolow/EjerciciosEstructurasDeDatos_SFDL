#include <iostream> 
using namespace std; 
int main (int argc, char *argv[]) { 
    double Altura, Base, Perimetro, Area; 
    
    cout<<"Escribe la base del rectangulo: "; 
    cin>>Base; 
    
    cout<<"Escribe la altura del rectangulo: "; 
    cin>>Altura; 
    
    Perimetro = (2*Base) + (2*Altura); 
    Area  = Base * Altura; 
    
    cout<<"El area del rectangulo es: "<<Area<<endl; 
    cout<<"El perimetro del rectangulo es: "<<Perimetro<<endl; 
    
    return 0; 
}