#include "main.h"
/**
 * main - print the number of args passed
 * @argc: arg count
 * @argv: array of pointers to the args
 *
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
