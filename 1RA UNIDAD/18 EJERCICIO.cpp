# DESCRIPCION DEL PROBLEMA

 En un hospital se ha hecho un estudio sobre los pacientes registrados durante los ultimos 10 años, con el objetivo de hacer una aproximacion de los costos de internacion por paciente. Se obtuvo un costo promedio diario segun el tipo de enfermedad que aqueja al paciente, ademas se pudo determinar que en un promedio todos los pacientes con edad entre 14 y 22 años implican un costo adicional del 10%, la siguiente tabla expresa los costos diarios, segun el tipo de enfermedad:

          Tipo de Enfermedad                       Costo/Enfer/Día
                 1                                   Q. 250.00
                 2                                   Q. 300.00
                 3                                   Q. 125.00
                 4                                   Q. 100.00

# SOLUCION DEL PROBLEMA

 #include <iostream>  
#include <stdlib.h>  
#include <stdio.h> 
using namespace std; 
 
int main() { 
    int num_pacientes = 0; 
    int costo_total = 0; 
 
    for (int i = 1; i <= 10; i++) { 
        cout << "Año " << i << ":\n"; 
         
        cout << "Ingrese el número de pacientes: "; 
        cin >> num_pacientes; 
 
        for (int j = 1; j <= num_pacientes; j++) { 
            int edad, tipo_enfermedad, costo_diario = 0; 
 
            cout << "Edad del paciente " << j << ": "; 
            cin >> edad; 
 
            cout << "Tipo de enfermedad (1, 2, 3, o 4): "; 
            cin >> tipo_enfermedad; 
 
            switch (tipo_enfermedad) { 
                case 1: 
                    costo_diario = 250; 
                    break; 
                case 2: 
                    costo_diario = 300; 
                    break; 
                case 3: 
                    costo_diario = 125; 
                    break; 
                case 4: 
                    costo_diario = 100; 
                    break; 
                default: 
                    cout << "Tipo de enfermedad no válido. Se asume costo diario 0.\n"; 
                    break; 
            } 
 
            if (edad >= 14 && edad <= 22) { 
                costo_diario += costo_diario * 0.1; 
            } 
 
            costo_total += costo_diario; 
        } 
    } 
 
    cout << "El costo promedio de internación por paciente durante los últimos 10 años es de Q." << costo_total / 10 << ".\n"; 
 
    return 0; 
}

