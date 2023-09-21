#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: apointer intiger
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
