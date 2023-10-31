#include <stdlib.h>
/**
 * *create_array - Create dynamic array and int with char
 * @size: Size of array
 * @c: Char to be intilizied
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	A = malloc(sizeof(char) * size);

	if (A == 0)
		return (NULL);

	while (i < size)
	{
		A[i] = c;
		i++;
	}
	return (A);
}
