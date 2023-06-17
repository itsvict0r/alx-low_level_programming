#include <stdio.h>
/**
  * main - prints alphabet
  *
  * Return: 0 (success)
  */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
