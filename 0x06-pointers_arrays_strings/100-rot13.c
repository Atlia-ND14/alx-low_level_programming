#include "main.h"
/**
 * rot13- function that encodes a string using rot13
 * @s: string
 * Return: string
 */
char *rot13(char *s)
{
	int i = 0, i = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpha2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i) != 0)
	{
		for (i2 = 0; i2 <= 52; i2++)
		{
			if (*(s + i) == alpha[i2])
			{
				*(s + i) = alpha2[i2];
				break;
			}
		}
				i++;
	}
		return (s);
}
