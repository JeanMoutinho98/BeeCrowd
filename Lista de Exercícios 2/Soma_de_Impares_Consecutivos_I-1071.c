#include <stdio.h>                              //funfou
#include <stdlib.h>
int main(){
    int a, b, maior, menor, soma;
    soma = 0;


    scanf("%d", &a);
    scanf("%d", &b);


    if(a > b){
        maior = a;
        menor = b;
    }
    else if(a < b){
        maior = b;
        menor = a;
    }
    else{
        maior = a;
        menor = b;
    }


    for(int i = menor + 1; i <= maior - 1; i++){
        if(abs(i) % 2 == 1){            // Checa se "i" é impar.
        soma = soma + i;
        }
    }


    printf("%d\n", soma);


return 0;
}