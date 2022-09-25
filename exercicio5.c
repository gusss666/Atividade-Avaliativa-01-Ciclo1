#include <stdio.h>

    int main () {
    struct dados 
    {
    char nome [8];
    char email [20];
    char telefone [9];
    }
    
    struct dados nome; 
    struct dados email;
    struct dados telefone;

    int namesize;
    int emailsize;
    int phonesize;

    printf ("Digite seu nome:");
    scanf ("%s", nome);
    namesize = strlen (nome);
    printf ("Digite seu email:");
    scanf ("%s", email);
    emailsize = strlen (email);

    printf ("Digite seu telefone:");
    scanf ("%s", telefone);
    phonesize = strlen (telefone);

    printf ("\nNome: %d digitos.\n", namesize);
    printf ("\nEmail: %d digitos.\n", emailsize);
    printf ("\nTelefone: %d digitos.\n", phonesize);
    
    return 0;
    }