# DESCRIPCION DEL PROBLEMA

Realice un programa que muestre en pantalla si un numero ingresado es positivo, negativo o nulo.

# SOLUCION DEL PROBLEMA

 #include <iostream>
 #include<tsdlib.h>
 #include<stdio.h>
   using namespace std;
     int main() {
      int numero;

       cout << "Ingrese un número: ";
       cin >> numero;

        if (numero > 0) {
        cout << "El número es positivo" << endl;
        } else if (numero < 0) {
        cout << "El número es negativo" << endl;
        } else {
        cout << "El número es nulo" << endl;
      }
    return 0;
    System("Pause");
    }
