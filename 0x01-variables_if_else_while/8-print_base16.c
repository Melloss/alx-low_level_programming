#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (char alp = 'a'; alp <= 'f'; alp++)
        {
                putchar(alp);
        }
	putchar('\n');

}
