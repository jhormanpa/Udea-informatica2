#include <iostream>

using namespace std;

/* Este programa realiza el promedio de las veces que se ingresa un número hasta que se
 * ingresa el número cero y esta no entra en el promedio*/
int main(){
    float numero, suma=0, cont=0, prom=0; /* declaramos las variables como float en caso que el
                                            promedio no sea entero*/

    cout << "Ingrese un numero "; /* pedimos el número y le damos una variable... */
    cin >> numero;                /*... que la reciba */

    while(numero !=0) /* usamos el ciclo while con la condición que sea diferente de cero e ingresar
                        al ciclo*/
    {
        suma= suma+numero;  /* realizamos las operaciones para hallar el promedio*/
        cont=cont+1;
        prom=suma/cont;
        cout<<"ingrese un numero "; /* volvemos a preguntar para continuar hasta que este sea cero*/
        cin>>numero;
    }
cout <<prom<<endl; /* mostramos el promedio de los numeros ingresados*/
}
