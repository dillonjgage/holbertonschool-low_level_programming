#include <stdio.h>
/**
 * main - prints the size of specific types
 * 
 * Return 0 if successful
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	long long int lliType;
	long int liType;

        printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
        printf("Size of a long int: %zu byte(s)\n", sizeof(liType));
        printf("Size of a long long int: %zu byte(s)\n", sizeof(lliType));
        printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
