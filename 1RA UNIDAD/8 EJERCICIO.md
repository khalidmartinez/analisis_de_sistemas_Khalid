# DESCRIPCION DEL PROBLEMA

Realice un programa que permita calcular el promedio de x notas utilizando for y muestre en pantalla si el alumno aprobó o reprobó el grado.

# SOLUCION DEL PROBLEMA

 #include<iostream>
 #include<tsdlib.h>
 #include<stdio.h>
 using namespace std;
  int main() {
    int numNotas;
    float totalNotas = 0.0, nota, prom;

    cout << "Ingrese el número de notas: ";
    cin >> numNotas;

    for (int i = 1; i <= numNotas; i++) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        totalNotas += nota;
    }
    prom = totalNotas / numNotas;
    cout << "El promedio de las " << numNotas << " notas es: " << promedio << endl;

    if (promedio >= 6.0) {
        cout << "El alumno aprobó el grado." << endl;
    } else {
        cout << "El alumno reprobó el grado." << endl;
    }

    return 0;
    System("Pause");
}
