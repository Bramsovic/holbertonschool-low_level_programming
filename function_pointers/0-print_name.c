#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - focntion qui appelle fonction
 * @name: Pointeur
 * @f: Pointeur sur une fonction qui prend un pointeur
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL & f == NULL)
return;
(f)(name);
}
