#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint - Ajoute un nouveau noeud au début de la liste
 * @head: Le pointer du premier noeud de la liste
 *
 * Return: La nouvelle liste, ou NULL si cela échoue.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *debutliste;
    debutliste = malloc(sizeof(dlistint_t));
if (debutliste == NULL)
    return (NULL);
 debutliste->n = n;
if (debutliste->n == 0)
{
    free(debutliste);
    return (0);
}
debutliste->next = *head;
*head = debutliste;
debutliste->prev = NULL;
return (debutliste);
}
