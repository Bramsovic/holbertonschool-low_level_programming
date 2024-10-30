#include "main.h"

/**
 * puts2 - Affiche un caractère sur deux d'une chaîne de caractères,
 * en commençant par le premier caractère.
 * @str: pointeur vers la chaîne de caractères.
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n'); // Saut de ligne à la fin
}
