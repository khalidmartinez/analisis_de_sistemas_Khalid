# DESCRIPCIÓN DEL PROBLEMA

 Construya un programa tal que dado como dato el lado de un hexaedro/cubo, calcule el área de la base, el área lateral, al área total y el volumen.

 NOTA: El resultado de cada proceso deberá ser almacenado en un array (el array debe tener 4 índices). Posteriormente mostrar lo que tiene almacenado el array con un ciclo for con la identificación respectiva de cada proceso.

                           Fórmulas:
                           AB=L^2
                           AL=4*L^2
                           AT=6*L^2
                           V=L^3

# SOLUCIÓN DEL PROBLEMA

 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
  using namespace std;
   int main(){
    float L,AB,AL,AT,V;
    float resultados[4];

    cout<<"Ingrese el lado del cubo/hexaedro: "<<endl;
    cin>>L;

    AB=L*L;
    AL=4*AB;
    AT=6*AB;
    V=L*L*L;

    resultados[0]=AB;
    resultados[1]=AL;
    resultados[2]=AT;
    resultados[3]=V;

    string result[4]={"AB","AL","AT","V"};
    for (int i=0; i<4; i++){
        cout<<"result[i]"<<":"<<resultados[i]<<endl;
    }
    system("Pause");
   }

 
