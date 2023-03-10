#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int cnt = 0;

	while (*(s + cnt) != '\0')
	cnt++;
	return (cnt);
}
