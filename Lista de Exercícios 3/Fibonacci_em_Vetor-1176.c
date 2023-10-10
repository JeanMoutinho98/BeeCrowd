#include <stdio.h>                                                                      // Não funcionou.

int main(){
    unsigned long long int fibonacci[61];
    
    
    fibonacci[0] = 0;
    fibonacci[1] = 1;


    for(int i = 2; i < 61; i++){
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }


    int num_testes, pos_fibonacci;
    scanf("%d", &num_testes);


    for(int i = 0; i < num_testes; i++){
        scanf("%d", &pos_fibonacci);
        printf("Fib(%d) = %lld\n", pos_fibonacci, fibonacci[pos_fibonacci]);
    }


    return 0;
}