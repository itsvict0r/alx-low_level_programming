#include <unistd.h>
#include <string.h>
/**
  * main - entry for program that prints info to standard error
  * without using man(3) printf or man(3) puts
  *
  * return: 1 (success)
  */
int main()
{
	const char *information = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, information, strlen(information));
	return (1);
}
