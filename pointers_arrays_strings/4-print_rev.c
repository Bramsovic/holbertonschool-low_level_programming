#include "main.h"

/**
 * print_rev - Affiche une chaîne de caractères en sens inverse.
 * @s: pointeur vers la chaîne de caractères à afficher.
 */
void print_rev(char *s)
{
int length = 0;
int i;
while (s[length] != '\0')
{
length++;
}
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
