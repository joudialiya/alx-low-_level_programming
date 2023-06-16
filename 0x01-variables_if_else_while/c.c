#include <stdio.h>

int main(void)
{
	int i = 0;
	int n = 0;
	while (i < 10)
	{
		while (n < 10)
		{
			printf("ab ");
			++n;
		}
		++i;
	}
	return (0);
}
