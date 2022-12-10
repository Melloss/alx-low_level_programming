#include <stdio.h>

int main(void)
{
	for (int i = 'z'; i >= 'a'; i--)
	{
		putchar((char)i);
	}
	putchar('\n');
}
