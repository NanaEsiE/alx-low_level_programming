#include "main.h"
/**
* _isdigit - function to  check if a digit is taken
* @c: takes in a character/digit
* Return: 1 if digit and 0 if anything else
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	return (0);
}
