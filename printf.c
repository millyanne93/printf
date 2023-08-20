#include "main.h"
#include <string.h>
/**
 *_printf - print formatted text to stdout
 *@format: format specifiers of printf function
 *return: total no of characters printed
 */
int _printf(const char *format, ...)
{	 int i, st_count;
	int total_count = 0;
	va_list git;

	va_start(git, format);
	if (format[i] =="%" && format[i] == '\0')
	{
		return -1;
	}
	for (i = 0; format[i] != '\0'; i++)
{
	{	if (format[i] != '%')
		{
		_pputchar(format[i]);
		}	
		else if (format[i + 1] == 'c')
		{
			_pputchar(va_arg(git, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			st_count = _puts(va_arg(git, char *));
			i++;
		total_count += (st_count - 1);
		}
		else if (format[i + 1] == '%')
		{
			_pputchar ('%');
		}
		total_count = +1;
}
		va_end(git);
		return (total_count);
}

