#include <stdio.h>
#include <string.h>

int main(){
    int entradas, valor1, valor2;
    char nome1[101], nome2[101], escolha1[6], escolha2[6];


    scanf("%d", &entradas);


    for(int i = 0; i < entradas; i++){
        scanf("%s", nome1);
        scanf("%s", escolha1);
        scanf("%s", nome2);
        scanf("%s", escolha2);
        scanf("%d", &valor1);
        scanf("%d", &valor2);
        int soma = valor1 + valor2;
        if(soma % 2 == 0 && strcmp(escolha1, "PAR") == 0){
            printf("%s\n", nome1);
        }
        else if(soma % 2 == 1 && strcmp(escolha1, "IMPAR") == 0){
            printf("%s\n", nome1);
        }
        else{
            printf("%s\n", nome2);
        }
    }


return 0;
}