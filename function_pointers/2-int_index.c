#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - cherche entier
 * @array: le tableau entiers
 * @size: la taille du tableau
 * @cmp: un pointeur
 *
 * Return: index de la première correspondance
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (cmp == NULL || array == NULL || size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
