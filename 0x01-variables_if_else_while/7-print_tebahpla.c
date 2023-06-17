#include <stdio.h>
/**
  * main - prints the alphabet in reverse
  *
  * Return: 0 (success)
  */
int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');
	return (0);
}
