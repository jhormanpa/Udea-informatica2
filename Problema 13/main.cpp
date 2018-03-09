#include <iostream>

using namespace std;

int j;

bool primo();

int main()
{
    int b=0, n;

    cout << "Ingrese un numero" << endl;        //pide el numero que ingresara el usuario
    cin >> n;

    for ( j=2; j<n ; j++){          //se emmpieza el ciclo desde dos porque este es el primer primo
        if (primo()==true){         //se verifica que sea primo el numero con la funcion 'primo'
            b+=j;                   //si lo es se va sumando a la variable b que contiene el resultado requerido
        }
    }

    cout << "El resultado de la suma es: " << b << endl;    //imprime el resultado
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
