#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print alphabet of letter
 *
 * Return: void
 */
void print_alphabet(void)
{
int alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
	_putchar(alph);
}
_putchar('\n');
}
