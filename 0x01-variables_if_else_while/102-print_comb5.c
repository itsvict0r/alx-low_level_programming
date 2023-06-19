#include <stdio.h>
/**
  * main - prints all possible combinations of
  * two digits
  *
  * Return: 0
  */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			int tens1 = a / 10;
			int unit1 = a % 10;
			int tens2 = b / 10;
			int unit2 = b % 10;

			putchar(tens1 + '0');
			putchar(unit1 + '0');
			putchar(' ');
			putchar(tens2 + '0');
			putchar(unit2 + '0');
			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
