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
if (format[i] == '%')
{
char spec = format[i + 1];
if (spec == '%')
{
_pputchar('%');
total_count++;
i++;
}
else if (pick_func(spec) != NULL)
{
total_count += (pick_func(spec))(git);
i++;
}
else
{
_pputchar('%');
_pputchar(spec);
total_count += 2;
i++;
}
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
