#include <stdio.h>

int main()
{
    int num;
    int contador = 0;
    
    printf ("Digite o número da tabuada:");
    scanf ("%d", &num);
    
    for (contador = 0; contador <= num; contador++)
    {
        printf ("%d x %d = %d\n", num, contador, num * contador);
    }
    
    return 0;
    
}