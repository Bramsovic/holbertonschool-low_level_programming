#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The main string to scan.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i, match_found;
while (*s)
{
match_found = 0;
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
match_found = 1;
count++;
break;
}
}
if (!match_found)
{
break;
}
s++;
}
return (count);
}
