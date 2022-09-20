#include "main.h"

/**
* _strcpy - Copy paste string
* @dest: destination
* @src: source
*
* Return: destination
*/

void *_strcpy(char *dest, char *src)
{
	int inc = o;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
