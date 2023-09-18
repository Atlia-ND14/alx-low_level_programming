#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */
void reverse_string(char *s)
{
	int length = strlen(s);
	
	for (int i = 0; i < length / 2; i++)
	{
		char temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
