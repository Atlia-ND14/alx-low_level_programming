#include <stdio.h>
#include "main h"
/**
 * print_diagsums - to print diagonal sum
 * @a: pointer
 * @size: size of arrey
 * Return: void
void print_diagsums(int *a, int size) 
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("Sum of the first diagonal: %d\n", sum1);
	printf("Sum of the second diagonal: %d\n", sum2);
}
