#include <iostream>
using namespace std;

int main()
/* Este programa calcula las primeras potencias de un número dado por el usuario*/

{
    int exp, numero; /* declaramos las variables como enteros.*/

    cout<<"ingrese por favor el número para hallar sus primeras 5 potencias ";

    cin>>numero;/* hacemos un output para pedir al usuario que ingrese el numero*/


  /* Hacemos un procedimiento manual multiplicando hasta las 5 veces para hallar sus potencias con un cout para
   * cada potencia desde uno hasta 5 */

    exp= numero*1;
    cout<<numero<<"^"<<"1"<<"="<<exp<<endl;
    exp= numero*numero;
    cout<<numero<<"^"<<"2"<<"="<<exp<<endl;
    exp= numero*numero*numero;
    cout<<numero<<"^"<<"3"<<"="<<exp<<endl;
    exp= numero*numero*numero*numero;
    cout<<numero<<"^"<<"4"<<"="<<exp<<endl;
    exp= numero*numero*numero*numero*numero;
    cout<<numero<<"^"<<"5"<<"="<<exp<<endl;


}
