// Ecrire un programme qui affiche le plus grand de trois entiers saisis.

#include <stdio.h>

int main(void)
{
    int i, j, k;

    printf("Saisir un premier nombre entier: ");
    scanf("%i", &i);

    printf("Saisir un deuxième nombre entier: ");
    scanf("%i", &j);

    printf("Saisir un troisième nombre entier: ");
    scanf("%i", &k);

    if (i > j && i > k)
    {
        printf("Le chiffre %i est le plus grand", i);
    }
    else if (j > i && j > k)
    {
        printf("Le chiffre %i est le plus grand", j);
    }
    else
    {
        printf("Le chiffre %i est le plus grand", k);
    }
}