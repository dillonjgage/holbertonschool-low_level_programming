#include "main.h"
/**
 *
 *
 *
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int length = 1;

		while (length <= size)
		{
			int space = (size - length);
			int fill = 1;

			while (space > 0)
			{
				_putchar(32);
				space--;
				
				while (fill <= length)
				{
					_putchar(35);
					fill++;
				}
			}
			_putchar('\n');
			length++;
		}
	}
}
