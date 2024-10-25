#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * This program prints "_putchar" followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char *str = "_putchar"; /* Chaîne à afficher */
/* Parcours de chaque caractère de la chaîne et affichage */
while (*str)
{
_putchar(*str); /* Utiliser _putchar pour afficher le caractère */
str++;          /* Passer au caractère suivant */
}
_putchar('\n'); /* Afficher un saut de ligne */
return (0); /* Renvoie le succ�s*/
}
