#include <stdio.h>                                                          //Não funcionou :(

int main(){
    int linha_matriz;
    char operacao;
    double matriz [12][12], soma = 0;


    scanf("%d", &linha_matriz);
    scanf("%c", &operacao);


    int linha = 0;
    for(int linha = 0; linha < 12; ++linha){
        for(int coluna = 0; coluna <12 ; coluna++){
        scanf("%lf", &matriz[0][coluna]);
        }
    }


    for(int coluna = 0; coluna < 12; coluna++){
        soma = soma + matriz[linha_matriz][coluna];
    }


    if(operacao == 'S'){
        printf("%.1lf\n", soma);
    }
    else if(operacao == 'M'){
        printf("%.1lf\n", soma/12);
    }


    return 0;
}