#include <stdio.h>
#include <string.h>

int main (){
    int entradas, consoantesconsecutivas = 0;
    char sobrenome[43];


    scanf("%d", &entradas);
    consoantesconsecutivas = 0;


    for( int i = 0; i < entradas; i++){
        fgets(sobrenome, 43, stdin);
        for(int posicao = 0; posicao < strleng(sobrenome); posicao++){
            char letra = sobrenome[posicao];
            if(letra != 'A' && letra != "E"  letra != "I" && letra != "E" && letra != "O" && letra != "U" && letra != 'a' && letra != "e" && letra != "i" && letra != "o" && letra != "u"){
                consoantesconsecutivas++;
                if(consoantesconsecutivas >= 3){
                    printf("%s nao eh facil\n", sobrenome);
                    consoantesconsecutivas = 0;
                    break;
                }
                
            }
            else {
                consoantesconsecutivas = 0;
            }
        }
        if(consoantesconsecutivas <=2){
            printf("%s eh facil\n", sobrenome);
            consoantesconsecutivas = 0;
        }
    }
}