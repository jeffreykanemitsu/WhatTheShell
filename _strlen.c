#include "holberton.h"
/**
 * _strlen - returns the length of string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a])
	{
		a++;
	}
	return (a);
}
