#include <stdio.h>
#include "main.h"
/**
 * main - prints number of arg
 * @argc: couts args
 * @argv: vector arg
 * Return: alwys 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
