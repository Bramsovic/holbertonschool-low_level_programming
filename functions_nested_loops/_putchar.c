#include <unistd.h>
#include "main.h"
/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error -1.
 */
int _putchar(char c) {
    return write(1, &c, 1); /* Écrire un caractère sur stdout */
}
