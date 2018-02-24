#include <iostream>

using namespace std;

int main()
/* Este programa calcula el factorial de un número ingresado por el usuario*/
{
    int i,fact=1, numero; /* declaramos las variables a usar en el programa, un contador fact, el número a calcular
                            y un "i" para aumentar o contador también para el for */
    cout<<"Ingrese por favor el número para hallar su factorial ";
    cin>>numero; /* ingresamos el número */

    if (numero<0){ /* un condicional en tal caso que el usuario ingrese un número menor a 0 */
        fact=0;
        cout<<" el factorial de "<<numero<<" es "<<fact<<endl; /* mostramos que dicho factorial de cualquier número es 0*/
    }
    else if(numero==0){ /* una condicional en tal caso que el usuario ingrese un numero igual a cero*/
        fact=1;
        cout<<" el factorial de "<<numero<<" es "<<fact<<endl; /* mostramos el resultado de que el factorial de cero siempre
                                                                 es 1*/
    }
    else{ /* en tal caso que el numero no es cero o menor, el programa calculará el factorial de dichos
           números ingresados mayores a cero*/
        for(i=1;i<=numero; i++){ /* realizamos un for para que recorra las veces hasta que este sea igual al numero
                                   ingresado*/
            fact=fact*i; /* multiplicamos fact por i cada vez que este aumente*/

        }
        cout<<" el factorial de "<<numero<<" es "<<fact<<endl;
    }
}
