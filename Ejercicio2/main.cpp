#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "escriba un numero ";
    cin >> numero;
    cout<< "el número que escribió es "<<numero<<endl;

    if(numero%2==0){
        cout << " el número "<<numero<<" es par " <<endl;
    }
    else{
        cout<< " el número "<<numero<<" es impar "<<endl;
    }
}
