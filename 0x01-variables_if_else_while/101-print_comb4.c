#include <stdio.h>
/**
  * main - prints all possible combinations of
  * three digits. All digits must be different
  *
  * Return: 0
  */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
				if (k == 9)
				{
					break;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
