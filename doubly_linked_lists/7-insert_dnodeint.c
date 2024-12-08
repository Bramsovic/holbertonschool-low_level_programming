#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a node at a given position.
* @h: pointer to the head of the double list.
* @counter: traverse the list.
* @n: node data.
* @current: where the node is.
* Return: the address of the new node, or NULL if that failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *nvnoeud;
dlistint_t *actuel = *h;
unsigned int compteur = 0;
if (idx == 0)
return (add_dnodeint(h, n));
while (actuel != NULL && compteur < idx - 1)
{
actuel = actuel->next;
compteur++;
}
if (actuel == NULL)
return (NULL);
nvnoeud = malloc(sizeof(dlistint_t));
if (nvnoeud == NULL)
return (NULL);
nvnoeud->n = n;
nvnoeud->next = actuel->next;
nvnoeud->prev = actuel;
if (actuel->next != NULL)
actuel->next->prev = nvnoeud;
actuel->next = nvnoeud;
return (nvnoeud);
}
