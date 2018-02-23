#include <iostream>

using namespace std;

int main()
{
    int A,B; /* se declara las dos variableas a ingresar como enteras */
    cout<<"Por favor ingresar dos números ";
    cin>> A >>B; /* se hace un input para darle valor a las dos variables enteras */
    if (A>B){ /* se crea un condicional para verificar si el número A es mayor que B */
        cout<<A<<"es mayor que "<<B<<endl;
    }
    else{ /* si no se cumple el primer IF entonces nos dirá que B es mayor que A por consecuencia */
        cout<<B<< " es mayor que "<<A<<endl;
    }
}
