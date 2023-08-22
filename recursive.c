#include "main.h"
/**
 * print_recursive - print digits of a number recursively
 * @mil: The input value
 * @count: count
 *
 * Return: count after printing digits
 */
int print_recursive(int mil, int count)
{
	if (mil == 0)
	{
		return (count);
	}
	count = print_recursive(mil / 10, count + 1);
	_pputchar((count == 1 && mil < 0) ? '-' : abs(mil) % 10 + '0');
	return (count - 1);
}
