#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: pointer to original array
 * @n: length of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;

	while (i < n)
	{
		temp = a[n - 1];
		/**
		 * copied from a so it is safe
		 */
		a[n - 1] = a[i];
		/**
		 * a is copied over since it is safe
		 */
		a[i] = temp;
		/**
		 * a grabs the copy from temp
		 * its like a triagle!
		 */
		i++;
		n--;
	}
}
