#include <stdio.h>
/**
 * main - print all arg
 * @argc: argu count
 * @argv: arry of pointers to CLI argu
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
