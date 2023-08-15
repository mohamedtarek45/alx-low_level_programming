#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_alphabet - prints the string "Holberton" from a character array.
 * Return: void..
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
