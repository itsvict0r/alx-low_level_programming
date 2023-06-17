#include <stdio.h>
/**
  * main - prints numbers in hex (base 16)
  * using putchar
  *
  * Return: 0 (success)
  */
int main(void)
{
	int i = 0;
	char hex = 'A';

	while (i < 10)
	{
		putchar(i + 48);
		i++;
	}
	while (hex < 'G')
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
