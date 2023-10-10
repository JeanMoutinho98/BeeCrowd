#include <stdio.h>


float main(){
    float distancia, combustivel, consumo;    


    printf("Insira a distancia percorrida:");
    scanf("%f", &distancia);
    printf("Insira o combustivel gasto:");
    scanf("%f", &combustivel);

    consumo = distancia / combustivel;
    printf("Resultado: %.3f\n", consumo);


return 0;
}