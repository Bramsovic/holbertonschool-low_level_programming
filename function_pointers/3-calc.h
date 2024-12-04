#ifndef CALC_H
#define CALC_H
#include <stddef.h> 
/* Déclaration de Prototype*/

struct op
{
char *op;
int (*f)(int a, int b); 
};
typedef struct op op_t;
int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
#endif