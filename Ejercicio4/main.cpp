#include <iostream>

using namespace std;
/* este programa solo compara si los dos número a ingresar es menor que el otro */
int main()
{
    int A,B; /* se declara las dos variableas a ingresar como enteras */
    cout<<"Por favor ingresar dos números ";
    cin>> A >>B; /* se hace un input para darle valor a las dos variables enteras */
    if (A<B){ /* se crea un condicional para verificar si el número A es menor que B */
        cout<<A<<" es menor que "<<B<<endl;
    }
    else{ /* si no se cumple el primer IF entonces nos dirá que B es menor que A por consecuencia */
        cout<<B<< " es menor que "<<A<<endl;
    }
}
