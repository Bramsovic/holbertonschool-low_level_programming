#include "main.h"

/**
 * factorial - retourne la factorielle d'un nombre donné
 * @n: le nombre dont on veut calculer la factorielle
 *
 * Return: la factorielle de n, ou -1 si n est inférieur à 0
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}

