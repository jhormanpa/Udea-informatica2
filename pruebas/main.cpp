#include <iostream>

using namespace std;

/*Manejo de arreglos con apuntadores*/

int main()
{
    char a[5][5]={{"1234"},{"7892"}};    //Definir arreglo
    cout<< *(*(a+1)+1)<<endl;                 //Imprimir un elemento del arreglo
    return 0;
}
