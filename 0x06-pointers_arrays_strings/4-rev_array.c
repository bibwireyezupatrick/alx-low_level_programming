#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int r;
int hejuru;

for (r = 0; r < n--; r++)
{
hejuru = a[r];
a[r] = a[n];
a[n] = hejuru;
}
}
