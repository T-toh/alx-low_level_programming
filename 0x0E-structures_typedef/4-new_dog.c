#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - prints the size of a string in bytes
 *
 * @s: pointer that will store the string's location
 *
 * Return: size of the string without the null \0 placed at the end of it
 */
int _strlen(char *s)
{
	int num;

	num = 0;
	while (*s != 0)
	{
		num++;
		s++;
	}
	return (num);
}

/**
 * _strcpy - copies the string from a pointer to another
 *
 * @src: pointer that has the string information
 * @dest: pointer to be copied
 *
 * Return: string copied to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src != 0; dest++, src++, i++)
	{
		*dest = *src;
	}
	for (*dest = 0; i > 0; dest--, src--, i--)
	{
	}
	return (dest);
}
