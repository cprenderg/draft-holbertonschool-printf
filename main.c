#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("_printf: ");
	printf("\nCharacters printed: %d\n", _printf("test", 0));
	
	printf("printf: ");
	printf("\nCharacters printed: %d\n", printf("test", 0));

	return (0);
}
