#include <stdio.h>
#include "main.h"
/**
 * main -  a program that prints the number of
 * arguments passed into it.
 * @argc: The number of arguments.
 * @argv: pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
