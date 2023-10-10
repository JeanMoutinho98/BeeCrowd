#include <stdio.h>

int main(){
    int num_testes, num_idiomas;


    scanf("%d", &num_testes);
    

    for(int i = 0; i < num_testes; i++){
        scanf("%d", &num_idiomas);


        char idiomas[num_idiomas][21];


        for(int k = 0; k < num_idiomas; k++){
            scanf("%s", idiomas[k]);
        }


        char primeiro_idioma[21];
        char idioma_falado[21];


        strcpy(primeiro_idioma, idiomas[0]);
        strcpy(idioma_falado, primeiro_idioma);


        for(int k = 0; k < num_idiomas; k++){
            if(strcmp(primeiro_idioma, idiomas[k]) != 0){
                printf("ingles\n");
                break;
            }
        }


        printf("%s\n", idioma_falado);
    }


return 0;
}