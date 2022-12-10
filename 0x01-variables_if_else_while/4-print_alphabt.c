#include <stdio.h>

int main(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		if ((char)i == 'e' || (char)i == 'q')
		{
			continue;
		}
		else {
			putchar((char)i);
		}
	}
	putchar('\n');
}
