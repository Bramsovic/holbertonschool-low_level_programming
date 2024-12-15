#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
/* Adds two integers */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtracts the second integer from the first
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
/* Subtracts second integer from the first */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
/* Multiplies two integers */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides the first integer by the second
 * @a: first integer
 * @b: second integer
 * Return: result of the division
 * Exits: if division by 0 is attempted
 */
/* Divides first integer by the second, exits on division by 0 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Finds the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder of the division
 * Exits: if division by 0 is attempted
 */
/* Finds the remainder of division, exits on division by 0 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
