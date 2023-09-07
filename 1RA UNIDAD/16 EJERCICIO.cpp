# DESCRIPCION DEL PROBLEMA
 
 Los clientes de un hospital tienen una credencial en la que ademas de otra informacion registra otra categoria que depende de los ingresos economicos del nucleo familiar del paciente. Teniendo en cuenta la categoria del hospital les hace un descuento cuando tienen que pagar su cuenta con base de la siguiente tabla:

    CAREGORIA                                   DESCUENTO
       1                                           35%
       2                                           22%
       3                                           15%
       4                                           5%

# SOLUCION DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
   int main(){
    float desc, ingresos, tot_pag;
    int cat;

    cout<<"Ingrese la cantidad de sus ingresos: "<<endl;
    cin>>ingresos;
    cout<<"Seleccione una categoria: "<<endl;
    cout<<"Categoria #1------35%"<<endl;
    cout<<"Categoria #2------22%"<<endl;
    cout<<"Categoria #3------15%"<<endl;
    cout<<"CAtegoria #4------5% "<<endl;
    cout<<"Mi categoria es la #";
    cin>>cat;
    Switch (cat){
     case 1:
      cout<<"Usted a seleccionado la categoria #1"<<endl;
      desc=ingresos*.35;
      tot_pag=ingresos-desc;
      cout<<"El total a pagar con su descuento realizado es de: "<<tot_pag<<" quetzales"<<endl;
      cout<<"Su descuento fue de: "<<desc<<endl;
      break;
    }

    case 2:
      cout<<"Usted a seleccionado la categoria #2"<<endl;
      desc=ingresos*.22;
      tot_pag=ingresos-desc;
      cout<<"El total a pagar con su descuento realizado es de: "<<tot_pag<<" quetzales"<<endl;
      cout<<"Su descuento fue de: "<<desc<<endl;
      break;
    }

    case 3:
      cout<<"Usted a seleccionado la categoria #3"<<endl;
      desc=ingresos*.15;
      tot_pag=ingresos-desc;
      cout<<"El total a pagar con su descuento realizado es de: "<<tot_pag<<" quetzales"<<endl;
      cout<<"Su descuento fue de: "<<desc<<endl;
      break;
    }

    case 4:
      cout<<"Usted a seleccionado la categoria #4"<<endl;
      desc=ingresos*.05;
      tot_pag=ingresos-desc;
      cout<<"El total a pagar con su descuento realizado es de: "<<tot_pag<<" quetzales"<<endl;
      cout<<"Su descuento fue de: "<<desc<<endl;
      break;
     default:
      cout<<"Ingrese una categoria correcta..!!";
   }
   
   return 0;
   System("Pause");
   
   }