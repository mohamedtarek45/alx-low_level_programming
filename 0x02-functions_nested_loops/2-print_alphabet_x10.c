#include "main.h"
/**
 * print_alphabet_x10 - prints the string "Holberton" from a character array.
 * Return: void..
 */
void print_alphabet_x10(void)
{
	char x;
	int z;

	for (z =  1; z <= 10; z++)
	{
	for (x = 'a'; x <= 'z' ; x++)
		{
				_putchar(x);
		}
		_putchar('\n');
	}
}

