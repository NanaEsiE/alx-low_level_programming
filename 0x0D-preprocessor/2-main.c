#include <stdio.h>

/**
 * main - prints the name of the compilation file with new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
