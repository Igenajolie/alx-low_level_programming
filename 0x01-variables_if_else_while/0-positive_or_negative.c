#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - check if a number is negative or positiveor zero
 *
 * Return: Always 0 (success)
 */
int	main(void)
{	int	n;
	srand(time(0));
	n	=	rand()	-	RAND_MAX	/	2;

	if	(n	>	0)
	{
		printf("%d\tis positve\n",	n);
	}
	else	if	(n	==	0)
	{
		printf("%d\tis zero\n",	n);
	}
	else
	{
		printf("%d\tis negative\n",	n);
	}
	return	(0);
}
