#include <iostream>

using namespace std;

int main()
// Este programa realiza el valor apróximado del número euler
{
    int n,a=1;     //inicializa las variables como enteros
    float e=1.0;   //se toma la variable e como flotante para poder dar una aproximación

    cout << "Ingrese los terminos de aproximación que desea para el termino:" << endl;
    cin >> n;         //captura la cantidad de términos en la variable n
    for (int i=1;i<=n;i++){     // por cada iteración lleva a 'e' más cerca de su resultado y
        a*=i;                   // aumenta 'a' para devidir entre el resultado de su factorial
        e+=1.0/a;
    }
    cout << "e es aproximadamente: " << e << endl;   //imprime el resultado de la aproximación
    return 0;
}
