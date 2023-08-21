#ifndef MAIN_H_
#define MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
int _printf(const char *format, ...);
int _pputchar(char c);
int _puts(const char *str);
int (*pick_func(char c))(va_list);
int _string(va_list args);
int _char(va_list args);
int _percent(va_list args);

#endif
