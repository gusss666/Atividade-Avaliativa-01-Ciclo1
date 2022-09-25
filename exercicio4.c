#include <stdio.h>

int main () {
    
    int numero;

    printf ("Escolha um número para a contagem regressiva:");
    scanf ("%d", &numero);
    
    while (numero >= 0){
    printf ("%d\n", numero);
    
    numero--;
    }
    
    printf ("Contagem feita com sucesso!");
}