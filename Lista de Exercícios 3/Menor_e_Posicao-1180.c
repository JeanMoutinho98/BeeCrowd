#include <stdio.h>

int main(){
    int tamanho_vetor, valor;
    
    
    scanf("%d", &tamanho_vetor);


    int vetor[tamanho_vetor];

    for(int posicao = 0; posicao < tamanho_vetor; posicao++){
        scanf("%d", &valor);
        vetor[posicao] = valor;
    }

    int menor_valor = vetor[0];
    int posicao_menor_valor = 0;
    for(int posicao = 0; posicao < tamanho_vetor; posicao++){
        if(vetor[posicao] < menor_valor){
            menor_valor = vetor[posicao];
            posicao_menor_valor = posicao;
        }
    }


    printf("Menor valor: %d\n", menor_valor);
    printf("Posicao: %d\n", posicao_menor_valor);
    

    return 0;
}