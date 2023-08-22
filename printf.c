#include <string.h>
#include "main.h"
#include <stdarg.h>

/**
 * _printf - print formatted text to stdout
 * @format: format specifiers for the printf function
 * Return: total number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, st_count;
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
			_pputchar(format[i]);
			total_count++;
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				_pputchar(va_arg(git, int));
				i++;
				total_count++;
			}
			else if (format[i + 1] == 's')
			{
				st_count = _puts(va_arg(git, char *));
				total_count += st_count;
				i++;
				total_count += (st_count - 1);
			}
			else if (format[i + 1] == '%')
			{
				_pputchar('%');
				total_count++;
			}
		}
	}
	va_end(git);
	return (total_count);
}
