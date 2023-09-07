# DESCRIPCION DEL PROBLEMA

 Construya un programa que permita realizar operaciones aritmeticas elementales, según la siguiente tabla:

    CLAVE                     OPERACIÓN
      +                         suma
      -                         resta
      *                     multiplicacion
      /                        division
      %                         modulo

# SOLUCION DEL PROBLEMA

  #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
   using namespace std;
    int main() {
    char operacion;
    int num1, num2, result;

    cout << "Ingrese la operacion a realizar (+, -, *, /, %): ";
    cin >> operacion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch (operacion) {
        case '+':
          cout<<"Ha seleccionado la operacion suma"<<endl;
            result = num1 + num2;
            cout<<"El resultado de la suma es de: "<<result<<endl;
            break;
        case '-':
          cout<<"Ha seleccionado la operacion resta"<<endl;
            result = num1 - num2;
            cout<<"El resultado de la resta es de: "<<result<<endl;
            break;
        case '*':
          cout<<"Ha seleccionado la operacion multiplicacion"<<endl;
            result = num1 * num2;
            cout<<"El resultado de la multiplicacion es de: "<<result<<endl;
            break;
        case '/':
          cout<<"Ha seleccionado la operacion division"<<endl;
            if (num2 != 0) {
                result = num1 / num2;
                cout<<"El resultado de la division es de: "<<result<<endl;
            } else {
                cout << "Error: Division por cero no permitida." << endl;
                return 1;
            }
            break;
        case '%':
          cout<<"Ha seleccionado la operacion de modulo"<<endl;
            if (num2 != 0) {
                result = num1 % num2;
                cout<<"El resultado del modulo es de: "<<result<<endl;
            } else {
                cout << "Error: Division por cero no permitida." << endl;
                return 1;
            }
            break;
        default:
            cout << "Operacion no valida." << endl;
            return 1;
        }
        }
