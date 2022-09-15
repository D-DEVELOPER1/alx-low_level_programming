#include "main.h"
/**
 * _isupper - checks for uppercase characte
 * @c: checking for uppercase
 * Return: Always 0
 */
int _isupper(int c)
{
char ch = "c";
if (isupper(ch))
{
	_putchar('1');
}
else
{
	_putchar('0');
}
return (0);
}
