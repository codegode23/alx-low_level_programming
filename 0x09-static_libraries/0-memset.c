#include "main.h"
/**
 * _memset - fills memory with a constant byte,
 * @s: the memory area.
 * @b: the constant byte.
 * @n: the bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		*(s + i) =  b;
	return (s);
}
