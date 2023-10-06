#include <stdio.h>

calcula_soma_itens_vetor(float* vetor){
    float soma = 0;
    int


    return soma; 
}

calcula_media_ponderada(float* valores, float* pesos){                          // float* indica que é um vetor.
    float soma = 0;
    int num_itens = sizeof(valores)/sizeof(valores[0]);                       // sizeof imprime o tamanho de bytes e esse cálculo descobre o numero de itens do vetor.


    for(int i = 0; i < num_itens; i++){
        soma +=valores[i] * pesos[i];
    }


    float soma_pesos = calcula_soma_itens_vetor(pesos);
    float media_ponderada = soma_ponderada / soma_pesos;


    return media_ponderada;
}


checa_aprovacao(float nota_exame);


calcula_media_final(float nota_exame, float media_inicial){
    float media_final = (nota_exame + media_inicial) / 2;
    

    return media_final;

}


int main(){
    float notas[4], soma = 0, pesos[4] = {2, 3, 4, 1};


    for(int i = 0; i < 4; i++){
        scanf("%f", &notas[i]);
    }


    for(int i = 0; i < 4; i++){
         soma += notas[i] * pesos[i];
    }


    float media_inicial = soma / 10;


    printf("Media: %.1f\n", media_inicial);


    if(media_inicial < 5){
        printf("Aluno reprovado.\n");
    }
    else if( media_inicial >= 7){
        printf("Aluno aprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        float nota_exame;
        scanf("%f", &nota_exame);
        printf("Nota do exame: %.1f\n", nota_exame);
        float media_final = (nota_exame + media_inicial) / 2;
        if(media_final >= 5){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media_final);
    }


    return 0;
}