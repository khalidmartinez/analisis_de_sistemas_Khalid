# DESCRIPCION DEL PROBLEMA

 Realice un programa que muestre en pantalla verdadero si se cumple la condicion de lo contrario muestre falso (debe mostrar en pantalla las operaciones aritmeticas) tome en cuenta la siguiente condicion:
    
        ((Z*A))2>666
           2
           x

# SOLUCION DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
  int main() {
    float z, a, x;

    cout<<"Ingrese el valor de z: ";
    cin>> z;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    double resultado = (((z * a) * (z * a)) * x) * x;

    cout << "Operaciones aritmeticas realizadas: " << endl;
    cout << "((z * a) * (z * a)) * x * x = ((((" << z << " * " << a << ")^2) * " << x << ")^2)" << std::endl;

    if (resultado < 666) {
        cout << "El resultado es verdadero." << endl;
    } else {
        cout << "El resultado es falso." << endl;
    }

    return 0;
}

 
 