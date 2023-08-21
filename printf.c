#include "main.h"
#include <string.h>

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
write(1, format, 1);
total_count++;
}
else if (format[i + 1] == 'c')
{
_pputchar(va_arg(git, int));
total_count++;
i++;
}
else if (format[i + 1] == 's')
{
st_count = _puts(va_arg(git, char *));
total_count += st_count;
i++;
}
else if (format[i + 1] == '%')
{
_pputchar('%');
total_count++;
i++;
}
}
va_end(git);
return (total_count);
}
