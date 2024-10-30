#include "main.h"

/**
 * puts_half - Affiche la seconde moitié d'une chaîne de caractères.
 * @str: pointeur vers la chaîne de caractères.
 */
void puts_half(char *str)
{
int length = 0;
int i, start;
while (str[length] != '\0')
{
length++;
}
if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length - 1) / 2 + 1;
}
for (i = start; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
