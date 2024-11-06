#include "main.h"

/**
 * _memset - Remplit une zone mémoire avec un octet constant.
 * @s: Pointeur vers la zone mémoire à remplir.
 * @b: Octet constant utilisé pour remplir.
 * @n: Nombre de premiers octets à remplir avec la valeur de b.
 *
 * Return: Pointeur vers la zone mémoire s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{        
s[i] = b;
}
return s;
}
