#include "main.h"
#include<unistd.h>

/**
 * _putchar	-	writes the character cto stdout
 * @c:the character to print
 *
 * Return:	Always 1 on success
 *
 */
int	_putchar(char c)
{
	return	(write(1,	&c,	1));
}
