#include <stdio.h>


double main(){
    double raio, pi = 3.14159, area;    


    printf("Insira o raio:");
    scanf("%lf", &raio);

    area = pi * raio * raio;
    printf("Resultado: %.4lf\n", area);


return 0;
}