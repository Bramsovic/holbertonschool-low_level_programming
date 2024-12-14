#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - appel de fonction
 * @array: tableau
 * @size: la taille du tableau 5
 * @action: un pointeur de fonction à appliquer sur chaque élément
 *
 * Return: R
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (action == NULL || array == NULL)
return;
for (i = 0; i < size; i++)
(action)(array[i]);
}
