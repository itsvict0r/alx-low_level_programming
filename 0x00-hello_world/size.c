#include <stdio.h>

int main(void)
{
	int i;
	float f;
	char c;
	double d;

	printf("Size of int is: %lu bytes.\n",sizeof(i));
	printf("Size of float is: %lu bytes.\n",sizeof(f));
	printf("Size of char is: %lu byte.\n",sizeof(c));
	printf("Size of double is: %lu bytes.\n",sizeof(d));

	return (0);
}	
