#include "main.h"

/**
 * _puts - Affiche une chaîne de caractères suivie d'un saut de ligne.
 * @str: pointeur vers la chaîne de caractères à afficher.
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
