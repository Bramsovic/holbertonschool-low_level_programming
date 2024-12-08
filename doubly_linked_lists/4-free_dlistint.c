#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Description: This function iterates through a doubly linked list
 * and frees each node to avoid memory leaks.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;
while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
