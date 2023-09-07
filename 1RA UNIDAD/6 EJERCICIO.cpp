# DESCRIPCION DEL PROBLEMA

 Ralice un programa que muestre en pantalla el total a pagar de un restaurante tomando en cuenta la siguiente tabla:

     CÓDIGO         PLATILLOS        PRECIOS
       33             Caldo          Q. 35.00
       8              Pizza          Q. 10.00
       5              Papas          Q. 15.00
       9            Micheladas       Q. 25.00

# SOLUCION DEL PROBLEMA

 #include <iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
   int main() {
    int codigo;
    double total = 0.0;

    cout << "Ingrese el platillo que a consumido: "<< endl;
    cout << "Caldo-------33-------Q. 35.00" << endl;
    cout << "Pizza-------8--------Q. 10.00" << endl;
    cout << "Papas-------5--------Q. 15.00" << endl;
    cout << "Micheladas--9--------Q. 25.00" << endl;

    cout << "Ingrese el código del platillo (-1 para terminar): ";
    cin >> codigo;

    while (codigo != -1) {
        switch (codigo) {
            case 33:
              cout<<"Ha seleccionado el codigo 33(Caldo)";
                total += PRECIO_CALDO;
                break;
            case 8:
              cout<<"Ha seleccionado el codigo 8(Pizza);
                total += PRECIO_PIZZA;
                break;
            case 5:
               cout<<"Ha seleccionado el codigo 5(Papas);
                total += PRECIO_PAPAS;
                break;
            case 9:
              cout<<"Ha seleccionado el codigo 9(Michelada);
                total += PRECIO_MICHELADAS;
                break;
            default:
                cout << "Código no es válido" << endl;
                break;
        }
          cout << "Ingrese el código del platillo (-1 para terminar): ";
          cin >> codigo;
    }
     cout << "Total a pagar: Q. " << total << endl;

    return 0;
    System("Pause");
}
