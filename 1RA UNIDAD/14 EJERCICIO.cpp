# DESCRIPCION DEL PROBLEMA

Realice un programa que realice un descuento de una compra si el total de la compra es mayor a Q. 5,000.00, con el descuento de 3%.

# SOLUCION DEL PROBLEMA

 #include <iostream>
using namespace std;

int main() {
    float totalCompra, totalDesc, des;

    cout << "Ingrese el total de la compra (en quetzales): ";
    cin >> totalCompra;

    if (totalCompra > 5000.00) {
        des = totalCompra * 0.03;
        totalDesc = totalCompra - des;

        cout << "Descuento aplicado: Q. " << des << endl;
        cout << "Total con descuento: Q. " << totalDesc << endl;
    } else {
        cout << "No se aplica descuento. Total a pagar: Q. " << totalCompra << endl;
    }

    return 0;
    System("Pause");
}
