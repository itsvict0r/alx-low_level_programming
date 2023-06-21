#include "main.h"
/**
  * _abs - this function prints the absolute value of a number
  * @n: the function parameter or argument
  *
  * Return: n.
  */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
	return (n);
}
