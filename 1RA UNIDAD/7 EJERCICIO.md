# DESCRIPCION DEL PROBLEMA

 Realice un programa que permita calcular el promedio de x notas utilizando ciclo for.

# SOLUCION DEL PROBLEMA

  #include<iostream>
  #include<stdlib.h>
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

    return 0;
    System("Pause");
}
