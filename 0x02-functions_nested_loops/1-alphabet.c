#include <stdio.h>
#include "main.h"
/**
 *main - Entry point
 *
 * Return: Always 0 (success)
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
