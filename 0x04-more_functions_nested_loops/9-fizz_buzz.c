#include <stdio.h>
#include "main.h"

/**
  * fizz_buzz - function that prints the numbers from 1 to 100
  * followed by a new line. But for multiples of three print Fizz
  * instead of the number and for the multiples of five print Buzz.
  * For numbers which are multiples of both three and five print FizzBuzz
  *
  * Return: void
  */
void fizz_buzz(void)
{
	int i;
	int mul3;
	int mul5;
	int mul35;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i != 0)
			mul3 = i;
		if (i % 5 == 0 && i != 0)
			mul5 = i;
		if (i % 15 == 0 && i != 0)
			mul35 = i;
		if (i != mul3 && i != mul5 && i != mul35)
		{
			printf("%d ", i);
		}
		else if (i == mul35)
		{
			printf("FizzBuzz ");
		}
		else if (i == mul3)
		{
			printf("Fizz ");
		}
		else
		{
			if (i != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
	}
	printf("\n");
}

/**
  * main - entry point
  *
  * Return: 0 always
  */
int main(void)
{
	fizz_buzz();
	return (0);
}
