#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
  * main - entry for program that prints info to standard error
  * without using man(3) printf or man(3) puts
  *
  * Return: 1 (success)
  */
int main(void)
{
	const char *i = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	const char *j = "\n";

	write(2, i, strlen(i));
	write(2, j, strlen(j));
	return (1);
}
