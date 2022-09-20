#include "main.h"
/**
 * swap_int - swaps the value of two integer
 * @u: pointer to the first int
 * @v: pointer to the second int
 * Return: null
 */
void swap_int(int *u, int *v)
{
int swp = *u;
*u = *v;
*v = swp;
}
