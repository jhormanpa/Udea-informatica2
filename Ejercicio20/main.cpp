#include <iostream>
using namespace std;
/*Este programa analiza un número si es palíndromo*/
int main()
{
    int I = 0; /* declaramos una variable que vaya desde el inicio del  número a ingresar*/
    cout<<"Ingrese el número ";
    string palabra; /* Declaramos la variable como una cadena de caracteres para poder recorrerla */
    cin >> palabra;
    int J = palabra.length() - 1; /* hacemos uso de unas de las funciones de la librería para hallar el
                                    tamaño de la palabra y le restamos uno ya que esta arranca desde cero*/
    int mitad = J / 2; /* dividimos la cantidad de número a su mitad para luego comparar*/
    while(palabra[I] == palabra[J]){ /* realizamos un condicional comparando el primer número con el último*/
        if(mitad == I){ /*luego al cumplir la primera condición, comparamos si el primer número ya recorrió hasta la mitad*/
           cout << "Es palíndromo "<<endl; /* en tal caso de que cumpla la función y ya I haya recorrido hasta su mitad y cumple
                                             con la condición*/
           break;
    }
     // le restamos a la primera y última letra para acercanos y comparar de nuevo hasta llegar a su mitad
     J--;
     I++;
    }
     if(mitad != I) /* y si en la mitad al comparar es diferente a I, entonces no cumple con una palabra palíndroma*/
     cout << "NO es palindromo "<<endl;
     return 0;
 }

