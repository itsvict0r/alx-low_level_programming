#include <stdio.h>
/**
  * main - prints alphabet in lower and upper cases
  *
  * Return: 0 (success)
  */
int main(void)
{
	char alp1 = 'a';
	char alp2 = 'A';

	while (alp1 <= 'z')
	{
		putchar(alp1);
		alp1++;
	}
	while (alp2 <= 'Z')
	{
		putchar(alp2);
		alp2++;
	}
	putchar('\n');
	return (0);
}
