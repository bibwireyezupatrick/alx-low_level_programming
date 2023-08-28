#include "main.h"
#include<stdio.h>
#include <string.h>
/**
 * print_diagsums - concantination fuction
 * @a : The character to print destination
 * @size : The character to print destination
 * Return: return @a
 */
void print_diagsums(int *a, int size)
{
int i, xaxis, yaxis;

xaxis = 0;
yaxis = 0;
for (i = 0; i < size; i++)
{
xaxis = xaxis + a[i * size + i];
}
for (i = size - 1; i >= 0; i--)
{
yaxis += a[i * size + (size - i - 1)];
}
printf("%d, %d\n", xaxis, yaxis);
}
