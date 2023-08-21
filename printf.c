#include "main.h"
#include <string.h>
#include <stdarg.h>

/**
 * _printf - print formatted text to stdout
 * @format: format specifiers for the printf function
 * Return: total number of characters printed
 */
int _printf(const char *format, ...)
{
	int i;
	int total_count = 0;
	va_list git;

	va_start(git, format);
	if (format == NULL)
	{
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			char spec = format[i + 1];

			total_count += (pick_func(spec))(git);
			i++;
		}
		else
		{
			_pputchar(format[i]);
			total_count++;
		}
	}
	va_end(git);
	return (total_count);
}
