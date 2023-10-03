#include "main.h"
#include <stdio.h>
/**
 * main - print all arguement passing
 * @argc: counting args
 * @argv: arrey
 * Return:alwys zero
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
