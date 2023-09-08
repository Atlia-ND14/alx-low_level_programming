#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: program that prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c < '10')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
