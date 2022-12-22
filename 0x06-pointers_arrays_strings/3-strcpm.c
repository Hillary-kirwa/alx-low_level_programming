#include "main.h"

/**
 *_strcpm - compares pointers to two srings.                                                      
 * @s1: A pointer to the first sring to be compared.                                                                         
 * @s2: A pointer to the second string to be compared.                                                                                
 * Return: If str1 < str2, the negative diffrence of the first unmatched char
 * If str1 == str2, 0.
 * If str1 > str2, the  positive diffrence of the first unmatched char                                                      
 */                                                                                                                                     

int _strcpm(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

        return (*s1 - *s2);  
