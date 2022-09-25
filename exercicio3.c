#include <stdio.h>

int main () {
    
    int data;
    int mes;
    int ano;
    int resultado;
    
    printf ("Qual o dia do seu nascimento?");
    scanf ("%d", &data);
    
    printf ("Digite o mês do seu nascimento em número:");
    scanf ("%d", &mes);
    
    printf ("Digite o seu ano de nascimento:");
    scanf ("%d", &ano);
    
    resultado = (data + mes + ano);
    
    while(resultado >= 10)
    {
       resultado = resultado / 100 + resultado % 100 % 5;
    }

    switch (resultado) {
        case 0:
        printf ("Você é tímido(a)!");
        break;
        
        case 1:
        printf ("Você é sonhador(a)!");
        break;
        
        case 2:
        printf ("Você é paquerador(a)!");
        break;
        
        case 3:
        printf ("Você é atraente!");
        break;
        
        case 4:
        printf ("Você é irresistível!");
        break;
    }
    
    
    return 0;
}