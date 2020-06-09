#include <iostream>

using namespace std;

int main(){
    //definicion de variables
    int auxEntero = 0;
    int rangoBusqueda = 0;
    cout<<"PROGRAMA QUE BUSCA NUMEROS PERFECTOS.\n\n";
    cout<<"Rango de busqueda (Ingrese un numero entero):";
    cin>>rangoBusqueda;

    for(int i = 1; i <= rangoBusqueda; i++){
        if(i % 2 == 0){
            for(int j = (i / 2); j >= 1 ; j--){
                if( i % j == 0){
                    auxEntero = auxEntero + j;
                }
            }
            if(auxEntero == i)
                cout<<"Número Perfecto "<<auxEntero <<endl;
        }
        auxEntero = 0;
    }
    return 0;
}