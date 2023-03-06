#include "main.h"
/**
 * _memcpy - will copy memory's area,
 * @dest: destination for memory area.
 * @src: emory area source.
 * @n: bytes.
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
