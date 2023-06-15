#include <stdio.h>
/**
 * main - entry point to program which tells the sizes of data types
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int num;
	long long int huge;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(num));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(huge));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
