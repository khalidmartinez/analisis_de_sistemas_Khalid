# DESCRIPCION DEL PROBLEMA

 Realice un programa que permita calcular la velocidad de un vehículo tomando en cuenta la siguiente fórmula:

    V=Dist/Tiempo

# SOLUCION DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
   int main (){
     float velocidad,distancia,tiempo;
   
     cout<<"Ingrese la distancia";
     cin>>distancia;
   
     cout<<"Ingrese el tiempo recorrido";
     cin>>tiempo;
   
     velocidad=distancia/tiempo;
   
     cout<<"La velocidad del vehiculo es de"<<velocidad<<"km/s"<<endl;
     system("pause");
 }
