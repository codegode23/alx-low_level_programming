#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints all arguments it receives.
 * @argc: number of arguments.
 * @argv: pointers.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
