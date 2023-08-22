#include "main.h"
/**
 * pick_func - selects the function that produces output
 *@c: the input value
 *Return: the pointer to the function
 */
int (*pick_func(char c))(va_list)
{
	switch (c)
	{
		case 's':
			return (&_string);
		case '%':
			return (&_percent);
		case 'c':
			return (&_char);
		case 'd':
			return (&_decimal);
		case 'i':
			return (&_integer);
		default:
			return (NULL);
	}
}
