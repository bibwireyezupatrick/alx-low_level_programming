#include "main.h"
#include <string.h>
/**
 * _strncpy - concantination fuction
 * @dest : The character to print destination
 * @src : the character that print source
 * @n : value n
 * Return: return @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
