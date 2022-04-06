// Ecrire un programme qui affiche les codes ASCII des lettres et des chiffres sous la forme suivante:
// caractère = A    code = 65   code hexa = 41
// caractère = B    code = 66   code hexa = 42

#include <stdio.h>

int main(void)
{
    int j = 65;

   for (int i = 0; i < 26; i++)
   {
       printf("caractère = %c   code = %i   code hexa = %x\n", j, j, j);
       j++;
   } 
}