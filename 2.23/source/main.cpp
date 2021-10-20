#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n1;
	int n2;
	int n3;

	printf("Enter three integers,and ill tell you\n");
	printf("the relationships they satisfy:\n ");

	scanf_s("%d%d%d",&n1,&n2,&n3);

	if(n1>n2)
	{
		if (n2 > n3)
		{
			printf(" %d > %d > %d\n", n1, n2, n3);
		}
		else // n3 > n2
		{
			if (n1 > n3)
			{
				printf(" %d > %d > %d\n", n1, n3, n2);
			}
			else // n3 > n1
			{
				printf(" %d > %d > %d\n", n3, n1, n2);
			}
		}
	}
	else // n2 > n1
	{
		if (n1 > n3)
		{
			printf(" %d > %d > %d\n", n2, n1, n3);
		}
		else // n3 > n1
		{
			if (n2 > n3)
			{
				printf(" %d > %d > %d\n", n2, n3, n1);
			}
			else // n3 > n2
			{
				printf(" %d > %d > %d\n", n3, n2, n1);
			}
		}
	}

	system("pause");
	return 0;
}