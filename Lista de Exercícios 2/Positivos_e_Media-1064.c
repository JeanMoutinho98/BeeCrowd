#include <stdio.h>                                          //comparar com o do professor.

int main(){
    float valor;
    int NumeroDePositivos = 0;
    float SomaDosPositivos = 0;


    for (int i = 0; i < 6; i++){
        scanf("%f", &valor);
        if(valor > 0){
            NumeroDePositivos++;
            SomaDosPositivos = SomaDosPositivos + valor;
            valor = 0;
        }
            
    }


    printf("%d valores positivos\n", NumeroDePositivos);
    printf("%.1f\n", SomaDosPositivos / NumeroDePositivos);


return 0;
}