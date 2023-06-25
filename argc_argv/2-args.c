#include "main.h"
/**
 * main - prints all args recieved
 * @argc: arg count
 * @argv: array of pointers to the args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
