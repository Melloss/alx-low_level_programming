#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar((i % 10)+ '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
}
