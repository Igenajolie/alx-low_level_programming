#include "main.h"

/**
 * _puts - displays a string to stdout
 *@str: string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
