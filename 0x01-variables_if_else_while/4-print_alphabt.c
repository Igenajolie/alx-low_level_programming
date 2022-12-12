#include<stdio.h>
/**
 * main - entry
 *
 * Return: Always 0
 */
int	main(void)
{	char	chr;

	for	(chr = 'a' ; chr <= 'z' ; chr++)
	{
		if	(chr == 'e' || chr == 'q')
			continue;
		putchar(chr);
	}
	putchar('\n');
	return	(0);
}
