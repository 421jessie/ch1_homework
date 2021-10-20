#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n1;
	int n2;

	printf("enter two integer to show if the first is a multiple of the second\n");

	scanf_s("%d%d", &n1, &n2);

	if (n1 % n2 == 0)
	{
		printf("%d is a multiple of %d", n1, n2);
	}
	else
	{
		printf("%d is not a multiple of %d", n1, n2);
	}
	return 0;
}