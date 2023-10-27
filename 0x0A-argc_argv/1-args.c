#include <stdio.h>
/**
 * main - Prints no. of argu
 * @argc: Arg count
 * @argv: array of pointers to CLI argument
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	*argv = *argv;
	printf("%d\n", argc - 1);
	return (0);
}
