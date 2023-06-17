#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
  * main - entry point for program that tests the if else variables
  * and prints specified comments.
  *
  * Return: 0 (successful)
  */
int main(void)
{
	int n;
	int lnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lnum = n % 10;
	/* your code goes there */
	if (lnum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lnum);
	}
	else if (lnum == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lnum);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lnum);
	}
	return (0);
}
