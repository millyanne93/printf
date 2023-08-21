#ifndef MAIN_H_
#define MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct _specifier- Struct specifier
 *
 * @_printf: format outputs pinted text in stdout
 * @f: The function associated
 */
typedef struct specifier
{
    char *str;
    int (*f)(int a, int b);
}spec;

int _printf(const char *format, ...);
int _pputchar(char c);
int _puts(const char *str);


#endif
