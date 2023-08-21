#include "main.h"
/**
 * pick_func - selects the function that produces output
 *@c: the input value
 *Return: the pointer to the function
 */
int (*pick_func(char c))(va_list)
{
	if (c == 's')
	{
		return (&_string);
	}
	else if (c == '%')
	{
		return (&_percent);
	}
	else if (c == 'c')
	{
		return (&_char);
	}
	else
	{
	return (NULL);
	}
}
