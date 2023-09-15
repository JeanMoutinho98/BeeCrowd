#include <stdio.h>

int main(){
    int ChaCorreto, tentativa, acertos = 0;


    scanf("%d", &ChaCorreto);


    for(int i = 0; i <5; i++){
        scanf("%d", &tentativa);
        if(tentativa == ChaCorreto){
            acertos++;
        }
    }


    printf("%d\n", acertos);


return 0;
}