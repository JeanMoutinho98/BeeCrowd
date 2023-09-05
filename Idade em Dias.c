#include <stdio.h>
int main(){
    int n, anos, meses, dias, resto;


    scanf("%d", &n);

    horas = n / 3600;
    resto = n % 3600;

    minutos = resto / 60;
    resto = n % 60;

    segundos = resto;

    printf("%d:%d:%d\n", horas, minutos, segundos);
    
return 0;
}
