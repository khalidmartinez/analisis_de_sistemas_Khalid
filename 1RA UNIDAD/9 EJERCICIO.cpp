# DESCRIPCION DEL PROBLEMA

 Realice un programa que permita hacer la conversion de grados centigrados a grados farenheit, tomando en cuenta la siguiente fórmula:

        F=(9/5)*C+32 

# SOLUCION DEL PROBLEMA

  #include<iostream>
  #include<stdlib.h>
  #include<stdio.b>
   unsing namespace std;
   int main(){
    float cent,result;

    cout<<"Ingrese los grados centigrados a convertir: ";
    cin>>cent;
    result=(cent*9/5)+32;
    
    cout<<"La conversion de grados centigrados a grados fahrenheit es de: "<<result<<" grados fahrenheit"<<endl;

    return 0;
    System("Pause");
   }