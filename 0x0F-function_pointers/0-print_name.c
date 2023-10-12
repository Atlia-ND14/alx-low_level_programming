#include "function_pointers.h"
/**
 * print_name - Sends the string to the function s
 * @name: String to send to function
 * @f: function to send string
 */
void print_name(char *name, void (*f)(char *));
{
	if (f && name)
	{
		f(name);
	}
}
