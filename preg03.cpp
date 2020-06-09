#include <iostream>
using namespace std;

int main() {
 
 int i = 0;
 string palabra;
 cout<<"ingrese palabra:  ";
 cin >> palabra;
 int j = palabra.length() - 1;
 int mitad = j / 2;
 while(palabra[i] == palabra[j]){
  if(mitad == i){
   cout << "Es capicua";
   break;
  }
 j--;
 i++;
 }
 if(mitad != i)
 cout << "No es capicua";
 return 0;
}