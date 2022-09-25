#include <stdio.h>

main() {


    int num1 = 0;
    int num2 = 1;
    int auxiliar;
    int i;
    int n;

    printf("Digite um número maior que 2:");
    scanf("%d", &n);
    printf("Série de Fibonacci:\n");
    printf("%d\n", num2);

    for(i = 0; i < n; i++) {

        auxiliar = num1 + num2;
        num1 = num2;
        num2 = auxiliar;

        printf("%d\n", auxiliar);
    }
    
}