#include <stdio.h>

int main(void)
{
	int i;

	for (i = 10, i < 20, 1++)
	{
		putchar((i % 10) + '0');
		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
