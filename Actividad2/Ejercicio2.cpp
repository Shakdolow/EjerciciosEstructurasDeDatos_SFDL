#include <iostream>
#include <algorithm>
using namespace std;
const int N = 10;
int main()
{
    int datos[N] = {2, 4, 44, 11, 33, 22, 5, 1, 2, 2};
    sort(datos, datos + N);

    cout << "Datos ordenados: ";

    for (int i = 0; i != N; ++i)
        cout << datos[i] << " ";

    return 0;
}