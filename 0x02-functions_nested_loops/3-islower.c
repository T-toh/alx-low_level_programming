#include "main.h"
/**
 * _islower - check if characteris lowercase
 * @c: is the character to be checked
 * Return: 1 if character is loercase , otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
