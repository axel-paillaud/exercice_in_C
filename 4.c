// Ecrire un programme qui détermine si un entier saisi est pair ou impair

#include <stdio.h>

int main(void)
{
    int i;

    printf("Saisisser un chiffre entier: ");
    scanf("%i", &i);

    if (i % 2 == 0)
    {
        printf("Le chiffre saisi est un nombre pair\n");
    }
    else
    {
        printf("Le chiffre saisi est un nombre impair\n");
    }
}