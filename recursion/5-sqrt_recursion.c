#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * 
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int i);
int _sqrt_recursion(int n)
{
return (_sqrt_helper(n, 1));
}
int _sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_sqrt_helper(n, i + 1));
}
