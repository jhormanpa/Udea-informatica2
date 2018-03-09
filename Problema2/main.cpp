#include <iostream>

using namespace std;

/* Este programa determina la mínima combinación de billetes
y monedas para una cantidad de dinero determinada.*/

int main()
{

    /* Declaramos la variable Dinero que ingresamos y contadores para dar sus respectivas vueltas*/
    int Dinero=0, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0, c10=0;

    /*Pedimos el dinero a cambiar y le damos una variable a tomar*/
    cout<<"ingrese la cantidad de dinero ";
    cin>> Dinero;

    /* realizamos un while para cada caso y realizar su resta para poder salir del ciclo y avanzar,
     * luego incrementamos el contador de las veces que tuvo que restarle, mostrando así cuanto cambio se
     * debe entregar para cada caso e imprimimos afuera del ciclo para cada uno y mostrar su resultado*/
   while (Dinero >= 50000){
        Dinero=Dinero-50000;
        c1++;
    }
    cout<<"50000 : "<<c1<<endl;

    while (Dinero>=20000 && Dinero<50000){
        Dinero= Dinero-20000;
        c2++;
    }
    cout<<"20000 : "<<c2<<endl;

    while (Dinero>=10000 && Dinero<20000){
        Dinero=Dinero-10000;
        c3++;
    }
    cout<<"10000 : "<<c3<<endl;

    while(Dinero>=5000 && Dinero<10000){
        Dinero=Dinero-5000;
        c4++;
    }
    cout<<"5000 : "<<c4<<endl;

    while(Dinero>=2000 && Dinero<5000){
        Dinero=Dinero-2000;
        c5++;
    }
    cout<<"2000 : "<<c5<<endl;

    while(Dinero>=1000 && Dinero<2000){
        Dinero=Dinero-1000;
        c6++;
    }
    cout<<"1000 : "<<c6<<endl;

    while(Dinero>=500 && Dinero<1000){
        Dinero=Dinero-500;
        c7++;
    }
    cout<<"500 : "<<c7<<endl;
    while(Dinero>=200 && Dinero<500){
        Dinero=Dinero-200;
        c8++;
    }
    cout<<"200 : "<<c8<<endl;

    while(Dinero>=100 && Dinero<200){
        Dinero=Dinero-100;
        c9++;
    }
    cout<<"100 : "<<c9<<endl;

    while(Dinero>=50 && Dinero<100){
        Dinero=Dinero-50;
        c10++;
    }
cout<<"50 : "<<c10<<endl;
cout<<"Faltante : "<<Dinero<<endl;
}

