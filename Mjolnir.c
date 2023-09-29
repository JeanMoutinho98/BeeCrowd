#include <stdio.h>
#include <string.h>

    int main(){
        int entradas, forca;
        char nome[50];


        scanf("%d", &entradas);


        for(int repeticoes = 0; repeticoes < entradas; repeticoes++){
            scanf("%s", nome);
            scanf("%d", forca);
            if(strcmp(nome, "Thor") == 0){
                printf("Y\n");
            }
            else{
                printf("N\n");
            }
        }


        return 0;
    }