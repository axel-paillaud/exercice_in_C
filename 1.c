// Ecrire un programme qui saisit deux entiers et affiche leur produit. Modifier ensuite le programme afin de saisir deux réels.

#include <stdio.h>
#include <string.h>

//functions prototypes
int get_int();

int main(void)
{
    printf("Ecrire un premier chiffre entier: ");
    int a = get_int();
    printf("Ecrire un deuxieme chiffre entier: ");
    int b = get_int();
    int c = a + b;
    printf("La somme des deux nombres entier est %i\n", c);
}

//Fonction qui demande de saisir un nombre réels

int get_int()
{
    int number;
    scanf("%i", &number);
    return number;
}