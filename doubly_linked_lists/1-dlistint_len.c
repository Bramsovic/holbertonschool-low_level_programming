#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * 
 * 
 *
 * 
 * 
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t compteur = 0;
while(h != NULL)
	{
		compteur++;
		h = h->next;
	}
	return compteur;
}
