#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the new dog, or NULL if failure.
 */

dog_t *new_dog(char *name, float age, char *owner);
