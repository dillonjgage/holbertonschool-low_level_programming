#include "main.h"
/**
 * main - provide result of two nums times each other
 * @argc: arg count
 * @argv: array of pointers to args
 *
 * Return: 0 - 2 args recieved for multiplication, 1 error
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);

	return (0);
}
