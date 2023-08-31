# DESCRIPCION DEL PROBLEMA

Realice un programa tal que dado como dato la cantidad de minutos:
       CODIGO      AREA      COSTO/MINUTO
         A       GUATEMALA      Q. 3.12
         B        ITALA         Q. 5.00
         C        MEXICO        Q. 2.10
         D      COSTA RICA      Q. 4.75

# SOLUCION DEL PROBLEMA
 
 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
  int main(){
    float tot_pag, min;
    
    char cod;

    cout<<"A------GUATEMALA------Q.3.12"<<endl;
    cout<<"B------ITALIA---------Q.5.00"<<endl;
    cout<<"C------MEXICO---------Q.2.10"<<endl;
    cout<<"D------COSTA RICA-----Q.4.75"<<endl;
    
    cout<<"Ingrese la cantidad de minutos hablados";
    cin>>min;
    cout<<"Ingrese el codigo del area a llamar";
    cin>>cod;

    switch (cod){
        case "A":
         cout<<Usted selecciono el area de GUATEMALA"<<endl;
         tot_pag=min*3.12;
         cout<<"Su total a pagar es de: "<<tot_pag;
         break;

        case "B":
         cout<<"Usted selecciono el area de ITALIA"<<endl;
         tot_pag=min*5;
         cout<<"Su total a pagar es de: "<<tot_pag;
         break;

        case "C":
         cout<<"Usted selecciono el area de MEXICO"<<endl;
         tot_pag=min*2.10;
         cout<<"Su total a pagar es de: "<<tot_pag;
         break;

        case "D":
         cout<<"Usted selecciono el area de COSTA RICA"<<endl;
         tot_pag=min*4.75;
         cout<<"Su total a pagar es de: "<<tot_pag;
         break;

        default;
         cout<<"Ingrese un codigo valido";

         system("Pause");
    }
  }