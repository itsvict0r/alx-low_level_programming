#include <stdio.h>
/**
  * main - prints numbers using putchar
  *
  * Return: 0 (success)
  */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + 48);
		i++;
	}
	putchar('\n');
	return (0);
}
