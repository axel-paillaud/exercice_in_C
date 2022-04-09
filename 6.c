// Ecrire un programme qui affiche le plus grand et le plus petit d'une suite de d'entiers saisis.
// Les nombres saisis ne sont pas conservés en mémoire. La suite se termine avec la valeur 0.

#include <stdio.h>

int main(void)
{
    int i;
    int j = 0;
    int k = 999;

    do
    {
        printf("Suite de chiffre: ");
        scanf("%i", &i);

        if (i > j)
            j = i;

        if (i < k && i != 0)
	{
		k = i;
	}
    }
    while (i != 0);

    printf("Le plus grand nombre saisi est: %i\n", j);
    printf("Le plus petit nombre saisi est: %i\n", k);
}
