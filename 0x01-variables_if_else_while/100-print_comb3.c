#include<stdio.h>
/**
 * main	-	entry
 *
 * Return:	Always	0
 */
int	main(void)
{
	int	i;
	int	j;

	for	(i = 0 ; i < 50 ; i++)
	{
		for (j = 1 ; j < 70 ; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
	return	(0);
}
