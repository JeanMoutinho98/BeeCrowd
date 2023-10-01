#include <stdio.h>


int main(){   
    float distancia, combustivel;


    scanf("%f", &distancia);
    scanf("%f", &combustivel);


    printf("%.3f km/l\n", distancia / combustivel);


return 0;
}