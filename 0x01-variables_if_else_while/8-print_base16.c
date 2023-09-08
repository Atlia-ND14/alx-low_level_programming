#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hx;

	for (hx = '0'; hx <= '9'; hx++)
	{
		putchar(hx);
	}
	for (hx = 'a'; hx <= 'f'; hx++)
	{
		putchar(hx);
	}
	putchar('\n');
	return (0);
}
