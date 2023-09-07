# DESCRIPCION DEL PROBLEMA

Realice un programa que permita determinar la edad mayor de 2 hermanos; muestre la edad mayor en pantalla.

# SOLUCION DEL PROBLEMA

  #include<iostream>
  #include<stdlib.h>
  #include<stdio.h>
   using namespace std;
   int main(){
    int edad_1, edad_2, dif;
   
    cout<<"Ingrese la edad del primer hermano: ";
    cin>>edad_1;
    cout<<"Ingrese la edad del segundo hermano: ";
    cin>>edad_2;
     
     if(edad_1>edad_2){
        dif=edad_1-edad_2;
         cout<<"El primer hermano es mayor por: "<<dif<<"años"<<endl;
         cout<<"La edad es: "<<edad_1<<endl;
     }
     else if(dif=edad_1==edad_2){
        cout<<"Los hermanos tienen la misma edad";
     }
     else{
        dif=edad_2-edad_1;
         cout<<"El segundo hermano es mayor por: "<<dif<<"años"<<endl;
         cout<<"La edad es: "<<edad_2<<endl;
     }
     System("Pause");
   }