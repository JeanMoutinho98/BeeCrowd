#include <stdio.h>


int main(){
    int num1, num2, resultado;


    printf("Insira o primeiro valor:");
    scanf("%d", &num1);
    printf("Insira o segundo valor:");
    scanf("%d", &num2);

    resultado = num1 * num2;
    printf("PROD=: %d\n", resultado);


return 0;
}