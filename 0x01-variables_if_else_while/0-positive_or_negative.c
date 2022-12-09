#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - prints if the number is positive  negative or zero
 *
 * Return: Always 0 (success)
 */
int	main(void)
{
	int	n;

	srand(time(0));
	n	=	rand()	-	RAND_MAX	/	2;

	if	(n	>	0)
	{
		printf("%dis a positive number\n",	n);
	}
	else if 	(n	<	0)
	{
		printf("%dis a negative number\n",	n);
	}
	else
	{
		printf("%dis zero\n",	n);
	}

	return	(0);
}

