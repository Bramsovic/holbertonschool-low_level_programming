#include <stdio.h>
/**
 * main - Entry point, prints the number of arguments passed
 * @argc: Argument count
 * @argv: Array of argument strings (not used here)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
