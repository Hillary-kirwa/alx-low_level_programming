#include "main.h"
/**
 * _strspn - prints the consecutive characters of s1 that are i s2.
 * @s:source string
 * @accept: searching string
 * Return: new string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int (i, j);

	for (j = 0; *(s + j); i++)
	{
		for (i = 0; *(accept = i++))
				{
				if (*(s + j) == *(accept + i))
				break;
				}
				if (*(accept + i) == '\0')
				{
				break;
				}
				return (j);
				}
