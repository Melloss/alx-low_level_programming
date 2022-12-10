#include <stdio.h>

int main (void)
{
	for (int i  = 'a'; i <= 'z'; i++)
	{
		putchar((char)i);
	}
	for (int j = 'A'; j <= 'Z'; j++)
	{
		putchar((char)j);
	}
	putchar('\n');
}
