#include "main.h"
#include <stdio.h>
/**
 * _strcpy - a function that copies the string pointed to by src,
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to destination.
 */
char *_strcpy(char *dest, char *src)
{
	int cnt = 0;

	while (cnt >= 0)
	{
		*(dest + cnt) = *(src + cnt);
		if (*(src + cnt) == '\0')
			break;
		cnt++;
	}
	return (dest);
}
