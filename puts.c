#include "main.h"
#include <string.h>

/**
 * _puts - function to writes string to stdout
 * @str: array of strings passed to the function
 * Return: number of characters written (excluding the null-terminator)
 */
int _puts(const char *str)
{
int count = 0;
if (str != NULL)
{
for (count = 0; count[str] != '\0'; count++)
{
_pputchar(str[count]);
}
_pputchar('\n');
}
return (count);
}
