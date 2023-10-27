#include <stdio.h>
/**
 * main - writes program name
 * @argc: arg count
 * @argv: array of pointers to CLI arg
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
