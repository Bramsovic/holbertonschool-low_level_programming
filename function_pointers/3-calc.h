#ifndef _CALC_H_
#define _CALC_H_

/**
 * struct op - Struct linking an operator to its function.
 * @op: Operator as a string (e.g., "+", "-").
 * @f: Pointer to the function performing the operation.
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
}
op_t;
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
