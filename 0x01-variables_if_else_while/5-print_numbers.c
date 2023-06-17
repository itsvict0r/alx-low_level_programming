#include <stdio.h>
/**
  * main - prints the digits
  *
  * Return: 0 (success)
  */
int main(void)
{
	int counter = 0;

	while (counter < 10)
	{
		printf("%d", counter);
		counter++;
	}
	printf("\n");
	return (0);
}
