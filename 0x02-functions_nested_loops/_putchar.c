#include "main.h"
#include <unistd.h>

/**
 * _putchar  - Prints  characters c to stdout
 * @c: the character to print
 *
 * Return: 1 (Success)
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
