#include <stdio.h>
int main(){                                                                     //Não funfou :(
    int n, numeronotas, resto;                                                      
                                

    scanf("%d", &n);
    printf("%d\n", n);

    numeronotas = n / 100;
    resto = n % 100;
    printf("%d nota(s) de R$ 100,00\n", numeronotas);

    numeronotas = n / 50;
    resto = n % 50;
    printf("%d nota(s) de R$ 50,00\n", numeronotas);

    numeronotas = n / 20;
    resto = n % 20;
    printf("%d nota(s) de R$ 20,00\n", numeronotas);

    numeronotas = n / 10;
    resto = n % 10;
    printf("%d nota(s) de R$ 10,00\n", numeronotas);

    numeronotas = n / 5;
    resto = n % 5;
    printf("%d nota(s) de R$ 5,00\n", numeronotas);

    numeronotas = n / 2;
    resto = n % 2;
    printf("%d nota(s) de R$ 2,00\n", numeronotas);

    numeronotas = n / 1;
    resto = n % 1;
    printf("%d nota(s) de R$ 1,00\n", numeronotas);


return 0;
}