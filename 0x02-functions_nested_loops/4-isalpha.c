#include "main.h"
/**
 * _isalpha - function to check if c is a letter, lowercase or uppercase
 * @c: is the int that will use for the arguement of the function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= '2') || (c >= 'A' && c <= '2'))
	{
		return (1);
	}
	else 
		return (0);
}

