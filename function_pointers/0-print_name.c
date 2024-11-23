#include "function_pointers.h"
/**
 * print_name - focntion qui appelle fonction
 * @name: Pointeur
 * @f: Pointeur sur une fonction qui prend un pointeur
 *
 * Appelle la fonction f avec le nom si name et f ne sont pas NULL.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL && f == NULL)
return;
(f)(name);
}
