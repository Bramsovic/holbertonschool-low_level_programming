#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Crée un nouveau chien
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 *
 * Return: Pointeur > new chien, ou NULL >d'erreur
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
if (name == NULL || owner == NULL)
return (NULL);
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
strcpy(new_dog->name, name);
new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
strcpy(new_dog->owner, owner);
new_dog->age = age;
return (new_dog);
}
