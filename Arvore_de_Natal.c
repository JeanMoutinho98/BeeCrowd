#include <stdio.h>

int main (){
    int tamanho;
    int meio = tamanho / 2;
    int linhas = meio + 1;
    int espacos = meio;
    int asteriscos = 1;    
    

    scanf("%d", &tamanho);


    for(int LinhaArvore = 0; LinhaArvore < linhas; LinhaArvore++){
        for(int EspacosImpressos = 0 ; EspacosImpressos < espacos; EspacosImpressos++){
            printf(" ");
        }
        for(int AsteriscosImpressos = 0; AsteriscosImpressos < asteriscos; AsteriscosImpressos++){
            printf("*");
        }
        printf("\n");
        asteriscos = asteriscos + 2;
        espacos--;


    for(int i = 0; i < meio; i++){
        printf(" ");
    }
    printf("*\n");


    for(int i = 0; i < meio - 1; i++){
        printf(" ");
    }
    printf("***\n");









    }



    return 0;    
}