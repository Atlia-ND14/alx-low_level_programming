#include "main.h"
/**
 * main - prints numbers (0 to 9 ommiting 2 and 4)
 * Return : always 0
 */
void print_most_numbers(void);
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if ((n == 2) || (n == 4))
			continue;
		else
			_putchar("%d", n);
	}

	_putchar("\n");
}
