#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
 printf("size of a char :%lu byte(s)\n",sizeof(char));
printf("the size of an int :%lu byte(s)\n",sizeof(int));
printf("the size of long int : %lu byte(s)\n",sizeof(long int));
printf("the size of long long int : %lu byte(s)\n",sizeof(long long int));
printf ("the size of float : %lu byte(s)\n",sizeof(float));
    return (0);
}
