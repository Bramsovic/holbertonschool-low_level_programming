#include "main.h"
int check_prime(int n, int i);
/**
 * is_prime_number - returns 1 if the input integer
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, 2));
}
/**
 * check_prime - checks if a number is divisible
 * @n: the number to check
 * @i: the divisor to test
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int i)
{
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (check_prime(n, i + 1));
}
