#include <stdio.h>
/**
  * main - prints numbers separated by
  * comma and space using putchar
  *
  * Return: 0 (success)
  */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + 48);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
