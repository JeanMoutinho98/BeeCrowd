#include <stdio.h>

int main(){
    int linhas, saidas = 1;


    scanf("%d", &linhas);


    for(int i = 0; i < linhas; i++){
        printf("%d %d %d PUM\n", saidas, saidas + 1, saidas + 2);
        saidas = saidas + 4;
    }


return 0;
}