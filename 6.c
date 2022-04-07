// Ecrire un programme qui affiche le plus grand et le plus petit d'une suite de d'entiers saisis.
// Les nombres saisis ne sont pas conservés en mémoire. La suite se termine avec la valeur 0.

#include <stdio.h>

int main(void)
{
    int suites[50];
    int i;
    int j = 0;

    do
    {
        printf("Suite de chiffre: ");
        scanf("%i", &i);

        suites[j] = i;
        j++;
    }
    while (i != 0);

    for ( int k = 0; k < j; k++)
    {
        printf("%i", suites[k]);
    }
}