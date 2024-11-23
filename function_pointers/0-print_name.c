#include<stdlib.h>
#include "function_pointers.h"
/**
 * print_name - focntion qui appelle fonction
 * @name: Pointeur
 * @f: Pointeur sur une fonction qui prend un pointeur
 *
 * Focntion qui utlise focntion
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL && f == NULL)
return;
(f)(name);
}
