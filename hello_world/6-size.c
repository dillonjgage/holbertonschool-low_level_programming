#include <stdio.h>
/**
 * main - prints the size of specific types
 *
 * Return 0 if successful
 */
int main(void)
{
	/**
	 * int intType;
	 * float floatType;
	 * char charType;
	 * long long int lliType;
	 * long int liType;
	 * Did the above, but it is not necessary to set types as variables.
	 * Calling on the types below is sufficient enough
	 */

	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
