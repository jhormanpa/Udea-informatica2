#include <iostream>

using namespace std;

int j;

bool primo();

int main()
{
    int b=0,n;
    cout << "Ingrese un número:" << endl;
    cin>> n;                                //se captura el número que quiere el usuario, tiene que ser positivo y entero

    for ( j=2; j<=100000 ; j++){            //en este ciclo se va aumentando el número para ver si es primo o no

        if (primo()==true){                 //cuando se encuentre un número que sea primo
            b+=1;                           //se aumenta a b para saber cuando detenerse
        }

        if (b==n){                                                      //detiene el ciclo para que no haga todas
            cout << "El primo numero " << n << " es " << j <<endl;      //100000 repeticiones que se proponen e imprime
            break;                                                      //el enésimo término primo
        }
    }
    return 0;
}
bool primo()                    //funcion para comprobar si el número es primo
{
    int a=0;
    for (int i=1; i<=j ; i++){
        if (j%i==0){
            a+=1;
        }
    }
    if (a==2){
        return true;
    }
    else{
        return false;
    }
}
