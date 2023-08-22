#include "main.h"

/**
 * _string - prints a string
 * @git: argument list
 * Return: number of characters printed
 */
int _string(va_list git)
{
	int count = 0;
	char *mil = va_arg(git, char *);

	if (str == NULL)
		return ("nil");

	while (*mil != '\0')
	{
		_pputchar(*mil);
		mil++;
		count++;
	}
	return (count);
}

/**
 * _char - prints a character
 * @git: argument list
 * Return: number of characters printed
 */
int _char(va_list git)
{
	char mil = va_arg(git, int);

	_pputchar(mil);
	return (1);
}

/**
 * _percent - prints a percent sign
 * @git: argument list (unused attribute)
 * Return: 1 (number of characters printed)
 */
int _percent(va_list git __attribute__((unused)))
{
	char *mil = "%";

	_pputchar(*mil);
	return (1);
}

/**
 * _decimal - prints decimal numbers
 * @git: argument list
 * Return: count
 */
int _decimal(va_list git)
{
	int count = 0;
	int mil = va_arg(git, int);

	count = _pputchar(mil, 0);
	return (count);
}

/**
 * _integer - prints an integer
 * @git: argument list
 * Return: count
 */
int _integer(va_list git)
{
	int count = 0;
	int mil = va_arg(git, int);

	count = _pputchar(mil, 0);
	return (count);
}
