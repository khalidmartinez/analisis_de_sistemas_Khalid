# DESCRIPCION DEL PROBLEMA

 Realiza un programa que permita mostrar en pantalla el resultado de la siguiente ecuacion:
      (36*a)2
         z
         
# SOLUCION DEL PROBLEMA

 #include<iiostream>
 #include<srdlib.h>
 #include<stdio.h>
  using namespace std;
  int main(){
   float a,z,mult,div,pot;
    
    cout<<"Ingrese a";
    cin>>a;
    cout<<"Ingrese z";
    cin>>z;
    
    mult=a*36;
    div=mult/z;
    pot=div*div;
    cout<<"El resultado es: "<<pot;

    Sistem("Pause");
    
    }