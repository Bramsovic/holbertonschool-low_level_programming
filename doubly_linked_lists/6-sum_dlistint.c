#include "lists.h"
/**
* sum_dlistint - returns the sum of all data in dlistint_t.
* @head: point to the head of the list
* Return: the sum of all data, or 0 if the list is empty.
*/
int sum_dlistint(dlistint_t *head)
{
int somme = 0;
while (head != NULL)
{
somme += head->n;
head = head->next;
}
return (somme);
}
