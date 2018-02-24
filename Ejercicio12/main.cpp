#include <iostream>
#include <math.h> /* agregamos este paquete para poder usar la función de pow.*/

using namespace std;

int main()
/* Este programa calcula las primeras potencias de un número dado por el usuario*/

{
    int i, exp, numero; /* declaramos las variables como enteros*/

    cout<<"ingrese por favor el número para hallar sus primeras 5 potencias ";

    cin>>numero;/* hacemos un output para pedir al usuario que ingrese el numero*/

    for(i=1; i<=5; i++){ /* realizamos un ciclo para que recorra desde el 1 hasta el 5*/
    exp=pow(numero,i);/* con la función pow(base,n) siendo base= numero, y n= i*/

    cout<<numero<<"^"<<i<<"="<<exp<<endl; /* mostramos el resultado de forma ordenada,
                                            ejemplo 1^1=1; 1^2=1 así hasta 5 y con salto de linea*/
        }

}
