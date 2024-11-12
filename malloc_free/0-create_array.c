#include <stdlib.h>

/**
 * create_array - crée un tableau de caractères et l'initialise avec un char donné
 * @size: la taille du tableau
 * @c: le caractère à utiliser pour l'initialisation
 *
 * Return: pointeur vers le tableau ou NULL en cas d'échec
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);
array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
