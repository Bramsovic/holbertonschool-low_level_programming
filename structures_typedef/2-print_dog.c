#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Affiche une structure dog
 * @d: Pointeur vers la structure à afficher
 *
 * Description: Cette fonction affiche att struture dog.
 * Si un élément est NULL, elle affiche (nil) à la place.
 * Si le pointeur est NULL=affiche rien.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
