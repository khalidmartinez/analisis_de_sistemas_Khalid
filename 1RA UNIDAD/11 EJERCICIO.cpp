# DESCRIPCION DEL PROBLEMA

 Realice un programa que permita convertir una cantidad x de pies a kilométros tomando en cuenta lo suguiente:

    1 kilometro es 3,280.84 pies

# SOLUCION DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
   int main () {
    float ft,km;
 
     cout<<"Ingrese la cantidad de pies a convertir";
     cin>>ft;
     
     km=ft/ 3280.84;
 
     cout<<"El resultado de la conversion de pies a kilometros es de"<<km<<"km"<<endl;
     
     return 0;
     system("pause");
 }



Ejercicio #11
