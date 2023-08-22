#include "main.h"
/**
 * _string - returns number of counts in a string
 * @args: the input argument
 * Return: count
 */
int _string(va_list git)
{
	int count = 0;

	char *mil = va_arg(git, char *);

	while (*mil != '\0')
	{
		_pputchar(*mil);
		mil++;
		count++;
	}
	return (count);
}

/**
 * _char - return number of bytes
 * @args: the input argument
 * Return: count
 */
int _char(va_list git)
{
	char mil = va_arg(git, int);

	_pputchar(mil);
	return (1);
}

/**
 * _percent - print percent sign
 * @args: the input argument(unused, can be removed)
 * Return: 1 (number of characters printed)
 */
int _percent(va_list git __attribute__((unused)))
{
	char *mil = "%";

	_pputchar(*mil);
	return (1);
}
