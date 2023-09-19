#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: iputs
 * Return: half of inputs
 */

void puts_half(char *str)
{
int len = _strlen(str);

if (len % 2 == 0)
len = len / 2;

else
len = (len + 1) / 2;

while (str[len] != '\0')
{
_putchar(str[len]);
len++;
}
_putchar('\n');
}
