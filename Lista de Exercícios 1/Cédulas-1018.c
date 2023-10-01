#include <stdio.h>
int main(){                                                                     
    int n, numeronotas, resto;                                                      
                                

    scanf("%d", &n);
    printf("%d\n", n);

    numeronotas = n / 100;
    resto = n % 100;
    printf("%d nota(s) de R$ 100,00\n", numeronotas);

    numeronotas = resto / 50;
    resto = resto % 50;
    printf("%d nota(s) de R$ 50,00\n", numeronotas);

    numeronotas = resto / 20;
    resto = resto % 20;
    printf("%d nota(s) de R$ 20,00\n", numeronotas);

    numeronotas = resto / 10;
    resto = resto % 10;
    printf("%d nota(s) de R$ 10,00\n", numeronotas);

    numeronotas = resto / 5;
    resto = resto % 5;
    printf("%d nota(s) de R$ 5,00\n", numeronotas);

    numeronotas = resto / 2;
    resto = resto % 2;
    printf("%d nota(s) de R$ 2,00\n", numeronotas);

    numeronotas = resto / 1;
    resto = resto % 1;
    printf("%d nota(s) de R$ 1,00\n", numeronotas);


return 0;
}