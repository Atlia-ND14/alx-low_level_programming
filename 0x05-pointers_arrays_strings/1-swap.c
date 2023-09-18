#include "main.h"
/**
 * swap_int swaps the value of two intigers
 * @a:parameter1
 * @b:parameter2
 * Return : an intiger
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
