# DESCRIPCION DEL PROBLEMA

Realice un programa que permita identificar un numero entero ingresado de la siguiente manera:
1. Si es par.
2. Si es impar.
3. Si es nulo.

# SOLUCION DEL PROBLEMA



# CODIGO DE SOLUCION

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
  int main(){
   int num;
   cout<<"Ingrese el numero;
   cin>>num;
   if(num==0){
     cout<<"El numero es nulo";
   else if(((num%2)==0)){
     cout<<"El numero es par";
    else if(((num%2)>0)){
     cout<<"El numero es impar";
    }
   }
   }
    else{
      cout<<"El numero es menor a cero";
    }
    System("Pause");
  }