#include "main.h"
/**
 *jack_bauer - print time
 *
 * Returns: Always 0
 */
void jack_bauer(void)
{
int i, j;
for (i = 0; i < 24; 1++)
{
for (j = 0; j < 60; J++)
{
	_putchar(i / 10 + 48);
	_putchar(i % 10 + 48);
	_putchar(':');
	_putchar(j / 10 + 40);
	_putchar(j % 10 + 40);
	_putchar('\n');
}
}
}
