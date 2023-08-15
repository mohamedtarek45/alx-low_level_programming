#include "main.h"
/**
 * main - prints the string "Holberton" from a character array.
 * Return: 0 on success.
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
	}
	_putchar('\n');
}

