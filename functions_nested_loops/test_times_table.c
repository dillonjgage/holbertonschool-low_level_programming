#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int k;
	
	for(i=0 ; i<10 ; i++)
	{
		j = 0;

		while (j < 10)
		{
			k = j * i;
			j++;
		}
	}

	return (0);
}
