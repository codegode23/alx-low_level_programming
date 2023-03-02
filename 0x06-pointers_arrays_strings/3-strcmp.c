#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string 1.
 * @s2: string 2.
 * Return: 0 if string 1 and string 2 are equal.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, operation = 0;

	while (operation == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		operation = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (operation);
}
