#include "main.h"
/**
 * leet - will encode a string into 1337
 * @s: input string.
 * Return: Always 0.
 */
char *leet(char *s)
{
	int cnt = 0, i;
	int lowercase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + cnt) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + cnt) == lowercase[i] || *(s + cnt) == uppercase[i])
			{
				*(s + cnt) = num[i];
				break;
			}
		}
		cnt++;
	}

	return (s);
}
