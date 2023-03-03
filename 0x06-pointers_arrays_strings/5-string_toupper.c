#include "main.h"
/**
 * string_toupper - changes all lowercase to uppercase
 * @s: input string.
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int cnt = 0;

	while (*(s + cnt) != '\0')
	{
		if ((*(s + cnt) >= 97) && (*(s + cnt) <= 122))
			*(s + cnt) = *(s + cnt) - 32;
		cnt++;
	}

	return (s);
}
