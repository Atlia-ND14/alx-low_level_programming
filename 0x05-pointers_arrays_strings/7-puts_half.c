#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: iputs
 * Return: half of inputs
 */

void puts_half(char *str)
{
	int length = len(str);
	int start_index;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}
	for (int i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

