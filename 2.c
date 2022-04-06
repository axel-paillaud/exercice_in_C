// Ecrire un programme qui échange deux entiers saisis. Afficher les entiers avant et après l'échange

#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Saisir la valeur de x: ");
    scanf("%i", &x);

    printf("Saisir la valeur de y: ");
    scanf("%i", &y);

    printf("Avant l'échange, la valeur de x est de: %i et la valeur de y est de: %i\n", x, y);

    int tmp = y;
    y = x;
    x = tmp;

    printf("Après l'échange, la valeur de x est de: %i et la valeur de y est de: %i\n", x, y);
}