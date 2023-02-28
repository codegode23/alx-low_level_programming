#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: given string.
 * Return: lways 0.
 */
void rev_string(char *s)
{
	int cnt = 0, a, b;
	char *str, temp;

	while (cnt >= 0)
	{
		if (s[cnt] == '\0')
			break;
		cnt++;
	}
	str = s;

	for (a = 0; a < (cnt - a); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			temp = *(str + b);
			*(str + b) = *(str + (b - 1));
			*(str + (b - 1)) = temp;
		}
	}
}
